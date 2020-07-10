// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/add-binary-strings.html .

string Solution::addBinary(string A, string B) {
    stringstream ss;
    int i = A.length() - 1, j = B.length() - 1, carry = 0;
    while (i >= 0 && j >= 0) {
        int digit = A[i] - '0' + B[j] - '0' + carry;
        ss << (digit % 2);
        carry = digit / 2;
        i--;
        j--;
    }
    while (i >= 0) {
        int digit = A[i] - '0' + carry;
        ss << (digit % 2);
        carry = digit / 2;
        i--;
    }
    while (j >= 0) {
        int digit = B[j] - '0' + carry;
        ss << (digit % 2);
        carry = digit / 2;
        j--;
    }
    if (carry) {
        ss << carry;
    }
    string res = ss.str();
    reverse(res.begin(), res.end());
    return res;
}
