// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/atoi.html .

int Solution::atoi(const string A) {
    long res = 0, sign = 1;
    bool foundDigit = false, foundSign = false;
    for (int i = 0; i < A.length(); i++) {
        char ch = A[i];
        if (!('0' <= ch && ch <= '9')) {
            if (ch == ' ') {
                if (foundDigit) {
                    break;
                }
            } else if (ch == '-' || ch == '+') {
                if (foundSign) {
                    break;
                } else {
                    if (ch == '-') {
                        sign = -1;
                    }
                    foundDigit = true;
                    foundSign = true;
                }
            } else {
                break;
            }
        } else {
            foundDigit = true;
            foundSign = true;
            res = res * 10 + (ch - '0');
            if (sign * res > INT_MAX) {
                return INT_MAX;
            } else if (sign * res < INT_MIN) {
                return INT_MIN;
            }
        }
    }
    return sign * res;
}
