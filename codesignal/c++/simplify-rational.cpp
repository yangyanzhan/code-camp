// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/simplify-rational.html .

int gcd(int a, int b) {
    if (a < b) {
        return gcd(b, a);
    }
    if (a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}

std::vector<int> simplifyRational(int numerator, int denominator) {
    using namespace std;
    if (numerator == 0) {
        return {0, 1};
    }
    int g = gcd(abs(numerator), abs(denominator));
    if (denominator < 0) {
        g = -g;
    }
    return {numerator / g, denominator / g};
}
