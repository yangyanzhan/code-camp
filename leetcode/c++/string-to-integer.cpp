// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/string-to-integer.html .

class Solution {
public:
    int myAtoi(string str) {
        long long sign = 1;
        long long abs_value = 0;
        long long res = 0;
        int minimum = numeric_limits<int>::min();
        int maximum = numeric_limits<int>::max();
        bool seen_num = false;
        for (auto &ch: str) {
            if (isdigit(ch)) {
                seen_num = true;
                int digit = ch - '0';
                abs_value = 10 * abs_value + digit;
                res = sign * abs_value;
                if (res < minimum) {
                    return minimum;
                } else if (res > maximum) {
                    return maximum;
                }
            } else {
                if (seen_num) {
                    break;
                }
                if (ch == ' ') {
                } else if (ch == '+') {
                    sign = 1;
                    seen_num = true;
                } else if (ch == '-') {
                    sign = -1;
                    seen_num = true;
                } else {
                    return 0;
                }
            }
        }
        return res;
    }
};

