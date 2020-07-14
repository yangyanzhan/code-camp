// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/gcd-sum.html .

using namespace std;

int gcd(int a, int b) {
    if (a < b) {
        return gcd(b, a);
    }
    if (a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}

pair<int, int> solve(int s, int g) {
    if (s % g != 0) {
        return {-1, -1};
    }
    int p = s / g;
    for (int i = 1; i <= p / 2; i++) {
        if (gcd(i, p - i) == 1) {
            return {i * g, (p - i) * g};
        }
    }
    return {-1, -1};
}
