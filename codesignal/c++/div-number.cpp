// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/div-number.html .

int divisors(int n) {
    int middle = floor(sqrt(n));
    int res = 0;
    for (int factor = 1; factor <= middle; factor++) {
        if (n % factor == 0) {
            res += 2;
        }
    }
    if (middle * middle == n) {
        res--;
    }
    return res;
}

int divNumber(int k, int l, int r) {
    int res = 0;
    for (int n = l; n <= r; n++) {
        if (divisors(n) == k) {
            res++;
        }
    }
    return res;
}

