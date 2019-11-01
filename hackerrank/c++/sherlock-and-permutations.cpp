// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

int gcd(int m, int n, int &x, int &y) {
    if (n % m == 0) {
        x = 1;
        y = 0;
        return m;
    }
    int x1, y1;
    int res = gcd(n % m, m, x1, y1);
    y = x1;
    x = y1 - n / m * x1;
    return res;
}

int solve(int n, int m) {
    int a = min(m - 1, n), b = max(m - 1, n), c = m + n - 1;
    unsigned long long res = 1;
    unsigned long long base = 1000000007;
    for (int i = b + 1; i <= c; i++) {
        res *= (i % base);
        res %= base;
    }
    for (int i = 2; i <= a; i++) {
        int x, y;
        gcd(i, base, x, y);
        x = (x + base) % base;
        res *= x;
        res %= base;
    }
    return res;
}
