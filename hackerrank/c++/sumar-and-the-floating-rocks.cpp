// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/sumar-and-the-floating-rocks.html .

int gcd(int a, int b) {
    if (b % a == 0) {
        return a;
    }
    return gcd(b % a, a);
}
int solve(int x1, int y1, int x2, int y2) {
    if (x1 == x2) {
        return abs(y1 - y2) - 1;
    }
    if (y1 == y2) {
        return abs(x1 - x2) - 1;
    }
    int a = min(abs(x1 - x2), abs(y1 - y2));
    int b = max(abs(x1 - x2), abs(y1 - y2));
    return gcd(a, b) - 1;
}
