// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/sum-of-differences-between-products-and-lcms.html .

#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    int g = gcd(max(a, b), min(a, b));
    return a / g * b;
}

int sum_differences_between_products_and_LCMs(
    const vector<vector<int>> &pairs) {
    int res = 0;
    for (auto pair : pairs) {
        int a = pair[0], b = pair[1];
        if (a != 0 && b != 0) {
            int g = gcd(max(a, b), min(a, b));
            res += a * b - a * b / g;
        }
    }
    return res;
}
