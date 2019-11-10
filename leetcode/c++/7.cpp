// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

class Solution {
public:
    int reverse(int x) {
        long long res = 0;
        long long tmp = x;
        int sign = tmp >= 0 ? 1 : -1;
        tmp = tmp > 0 ? tmp : -tmp;
        while (tmp) {
            int digit = tmp % 10;
            tmp /= 10;
            res *= 10;
            res += digit;
        }
        res *= sign;
        if (res > numeric_limits<int32_t>::max() || res < numeric_limits<int32_t>::min()) {
            return 0;
        }
        return res;
    }
};
