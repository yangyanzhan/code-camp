// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/greatest-common-prime-divisor.html .

int gcd(int a, int b) {
    if (a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}

std::vector<int> get_factors(int n) {
    using namespace std;
    vector<int> factors;
    int f = 2;
    while (n % f == 0) {
        factors.push_back(f);
        n /= f;
    }
    f++;
    while (f <= sqrt(n)) {
        while (n % f == 0) {
            factors.push_back(f);
            n /= f;
        }
        f += 2;
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

int greatestCommonPrimeDivisor(int a, int b) {
    using namespace std;
    int g = gcd(max(a, b), min(a, b));
    if (g == 1) {
        return -1;
    }
    auto factors = get_factors(g);
    return factors.back();
}
