// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

class Solution {
public:
    int myAtoi(string str) {
        int n = str.size();
        // check for sign
        int64_t sign = 1;
        int digit_idx = -1;
        for (int i = 0; i < n; i++) {
            char ch = str[i];
            if (ch == ' ') {
                continue;
            }
            if (ch == '+') {
                sign = 1;
                digit_idx = i + 1;
                break;
            }
            if (ch == '-') {
                sign = -1;
                digit_idx = i + 1;
                break;
            }
            int digit = ch - '0';
            if (0 <= digit && digit <= 9) {
                sign = 1;
                digit_idx = i;
                break;
            }
            return 0;
        }
        if (digit_idx >= n || digit_idx == -1) {
            return 0;
        }
        int digit = str[digit_idx] - '0';
        if (digit < 0 || digit > 9) {
            return 0;
        }
        int64_t num = 0;
        int64_t res;
        int64_t min = INT_MIN;
        int64_t max = INT_MAX;
        for (int i = digit_idx; i < n; i++) {
            int digit = str[i] - '0';
            if (digit < 0 || digit > 9) {
                break;
            }
            num *= 10;
            num += digit;
            res = sign * num;
            if (res >= max) {
                res = max;
                break;
            }
            if (res <= min) {
                res = min;
                break;
            }
        }
        return res;
    }
};
