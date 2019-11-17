// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/russian-peasant-exponentiation.html .

vector<long long> solve(long long a, long long b, long long k, long long m) {
    long long c, d;
    if (k == 0) {
        c = 1;
        d = 0;
    } else if (k == 1) {
        c = a;
        d = b;
    } else {
        auto res1 = solve(a, b, k / 2, m);
        auto res2 = solve(a, b, k % 2, m);
        long long c1 = res1[0], d1 = res1[1], c2 = res2[0], d2 = res2[1];
        long long c3 = c1 * c1 - d1 * d1, d3 = c1 * d1 + d1 * c1;
        c3 %= m;
        d3 %= m;
        c = c3 * c2 - d3 * d2, d = c3 * d2 + d3 * c2;
    }
    c = (c % m + m) % m;
    d = (d % m + m) % m;
    vector<long long> res({c, d});
    return res;
}
