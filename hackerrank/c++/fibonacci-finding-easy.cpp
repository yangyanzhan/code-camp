// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/fibonacci-finding-easy.html .

vector<unsigned long long> mul(vector<unsigned long long> mat1, vector<unsigned long long> mat2, unsigned long long mod) {
    auto a1 = mat1[0], b1 = mat1[1], c1 = mat1[2], d1 = mat1[3];
    auto a2 = mat2[0], b2 = mat2[1], c2 = mat2[2], d2 = mat2[3];
    auto a3 = a1 * a2 % mod + b1 * c2 % mod;
    auto b3 = a1 * b2 % mod + b1 * d2 % mod;
    auto c3 = c1 * a2 % mod + d1 * c2 % mod;
    auto d3 = c1 * b2 % mod + d1 * d2 % mod;
    a3 %= mod;
    b3 %= mod;
    c3 %= mod;
    d3 %= mod;
    return {a3, b3, c3, d3};
}

vector<unsigned long long> pow(vector<unsigned long long> mat, unsigned long long n, unsigned long long mod) {
    if (n == 0) {
        return {1, 0, 0, 1};
    }
    auto half = pow(mat, n / 2, mod);
    auto res = mul(half, half, mod);
    if (n % 2 == 1) {
        res = mul(res, mat, mod);
    }
    return res;
}

int solve(int a, int b, int n) {
    unsigned long long mod = 1000000007;
    a %= mod;
    b %= mod;
    if (n == 0) return a;
    if (n == 1) return b;
    vector<unsigned long long> base = {0, 1, 1, 1};
    auto mat = pow(base, n - 1, mod);
    auto x = mat[0], y = mat[1], z = mat[2], w = mat[3];
    return (y * a % mod + w * b % mod) % mod;
}

