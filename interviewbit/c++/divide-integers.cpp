// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/divide-integers.html .

int Solution::divide(int dividend, int divisor) {
    long long d1 = dividend, d2 = divisor;
    if (d2 == 0) {
        return INT_MAX;
    }
    int sign = 1;
    if ((d1 < 0 && d2 > 0) || (d1 > 0 && d2 < 0)) {
        sign = -1;
    }
    if (d1 < 0) d1 = -d1;
    if (d2 < 0) d2 = -d2;
    vector<int> bits(32, 0);
    for (int i = 0; i < 32; i++) {
        int p = 32 - 1 - i;
        if ((d2 << p) > d1) {
            continue;
        }
        bits[i] = 1;
        d1 -= (d2 << p);
    }
    long long res = 0;
    for (int i = 0; i < 32; i++) {
        res = (res << 1) + bits[i];
    }
    res = sign == 1 ? res : -res;
    if (res < INT_MIN || res > INT_MAX) {
        return INT_MAX;
    }
    return res;
}

