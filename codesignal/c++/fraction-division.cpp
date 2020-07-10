// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/fraction-division.html .

int gcd(int a, int b) {
    if (a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}

std::vector<int> fractionDivision(std::vector<int> a, std::vector<int> b) {
    using namespace std;
    int a1 = a[0], a2 = a[1];
    int b1 = b[0], b2 = b[1];
    if (a1 == 0) {
        return {0, 1};
    }
    int c1 = a1 * b2, c2 = a2 * b1;
    int g = gcd(max(abs(c1), abs(c2)), min(abs(c1), abs(c2)));
    return {c1 / g, c2 / g};
}
