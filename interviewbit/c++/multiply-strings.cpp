// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/multiply-strings.html .

string multiply1(string A, int b) {
    int carry = 0;
    stringstream ss;
    for (int i = A.length() - 1; i >= 0; i--) {
        int a = A[i] - '0';
        int num = a * b + carry;
        ss << (num % 10);
        carry = num / 10;
    }
    if (carry) {
        ss << carry;
    }
    string res = ss.str();
    reverse(res.begin(), res.end());
    return res;
}

string add(string A, string B) {
    int i = A.length() - 1, j = B.length() - 1, carry = 0;
    stringstream ss;
    while (i >= 0 && j >= 0) {
        int digit = (A[i] - '0') + (B[j] - '0') + carry;
        ss << (digit % 10);
        carry = digit / 10;
        i--;
        j--;
    }
    while (i >= 0) {
        int digit = (A[i] - '0') + carry;
        ss << (digit % 10);
        carry = digit / 10;
        i--;
    }
    while (j >= 0) {
        int digit = (B[j] - '0') + carry;
        ss << (digit % 10);
        carry = digit / 10;
        j--;
    }
    if (carry) {
        ss << carry;
    }
    string res = ss.str();
    reverse(res.begin(), res.end());
    return res;
}

string trim(string A) {
    int i;
    for (i = 0; i < A.length(); i++) {
        if (A[i] != '0') {
            break;
        }
    }
    if (i == A.length())
        return "0";
    return A.substr(i);
}

string Solution::multiply(string A, string B) {
    vector<string> nums;
    for (int i = B.length() - 1; i >= 0; i--) {
        string num = multiply1(A, B[i] - '0');
        for (int j = B.length() - 1; j > i; j--) {
            num += "0";
        }
        nums.push_back(num);
    }
    string res = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        res = add(res, nums[i]);
    }
    return trim(res);
}
