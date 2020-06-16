// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/add-one-to-number.html .

vector<int> Solution::plusOne(vector<int> &A) {
    int n = A.size(), carry = 1;
    for (int i = n - 1; i >= 0; i--) {
        int digit = A[i];
        digit += carry;
        A[i] = digit % 10;
        carry = digit / 10;
    }
    if (carry > 0) {
        A.insert(A.begin(), carry);
    }
    while (A[0] == 0) {
        A.erase(A.begin(), A.begin() + 1);
    }
    return A;
}

