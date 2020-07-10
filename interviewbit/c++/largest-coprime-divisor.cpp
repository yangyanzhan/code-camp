// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/largest-coprime-divisor.html .

vector<int> getFactors(int n) {
    vector<int> res;
    int factor = 2;
    while (factor <= n) {
        while (n % factor != 0) factor++;
        res.push_back(factor);
        while (n % factor == 0) n /= factor;
    }
    return res;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

int Solution::cpFact(int A, int B) {
    int g = gcd(max(A, B), min(A, B));
    if (g == 1) return A;
    for (int factor : getFactors(g)) {
        while (A % factor == 0) A /= factor;
    }
    return A;
}

