// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/reverse-integer.html .

#include <algorithm>

class Solution {
public:
    int reverse(int x) {
        using namespace std;
        long long sign = x >= 0 ? 1 : -1;
        long long remains = abs((long long)x);
        long long y = 0;
        long long res = 0;
        while (remains > 0) {
            int digit = remains % 10;
            y = 10 * y + digit;
            remains /= 10;
            res = sign * y;
            if (res < numeric_limits<int>::min() || res > numeric_limits<int>::max()) {
                return 0;
            }
        }
        return res;
    }
};

