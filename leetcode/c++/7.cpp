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
