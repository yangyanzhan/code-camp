// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/restaurant.html .

int gcd(int m, int n) {
    if (n % m == 0) {
        return m;
    }
    return gcd(n % m, m);
}

int restaurant(int l, int b) {
    int m = min(l, b), n = max(l, b), g = gcd(m, n);
    return (m / g) * (n / g);
}
