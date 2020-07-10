// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Acres (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/divide-two-integers.html .

class Solution {
    map<vector<long long>, vector<long long>> cache;

  public:
    int divide(int dividend, int divisor) {
        return divide((long long)dividend, (long long)divisor);
    }

    int divide(long long dividend, long long divisor) {
        if (dividend == 0) {
            return 0;
        }
        int sign =
            ((dividend > 0 && divisor > 0) || (dividend < 0 && divisor < 0))
                ? 1
                : -1;
        if (dividend < 0) {
            dividend = 0 - dividend;
        }
        if (divisor < 0) {
            divisor = 0 - divisor;
        }
        long long res = divide_positive(dividend, divisor)[0];
        if (sign == -1) {
            res = 0 - res;
        }
        int minimum = numeric_limits<int>::min();
        int maximum = numeric_limits<int>::max();
        if (res < minimum || res > maximum) {
            return maximum;
        }
        return res;
    }

    vector<long long> divide_positive(long long dividend, long long divisor) {
        long long res = 0;
        long long remains = 0;
        if (dividend == 0) {
            return {res, remains};
        }
        vector<long long> pair = {dividend, divisor};
        if (cache.find(pair) != cache.end()) {
            return cache[pair];
        }
        if (dividend < 2) {
            res = 0;
            remains = dividend;
        } else {
            long long half1 = dividend >> 1;
            long long half2 = dividend - half1;
            auto pairs1 = divide_positive(half1, divisor);
            auto pairs2 = divide_positive(half2, divisor);
            long long res1 = pairs1[0], remains1 = pairs1[1];
            long long res2 = pairs2[0], remains2 = pairs2[1];
            res = res1 + res2;
            remains = remains1 + remains2;
        }
        while (remains >= divisor) {
            res++;
            remains -= divisor;
        }
        cache[pair] = {res, remains};
        return {res, remains};
    }
};
