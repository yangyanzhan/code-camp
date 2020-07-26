// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/geometry-basics-cross-product-in-3d.html .

#include <vector>

using namespace std;

Vector cross_product(const Vector &a, const Vector &b) {
    auto a1 = a.x, a2 = a.y, a3 = a.z;
    auto b1 = b.x, b2 = b.y, b3 = b.z;
    auto c1 = a2 * b3 - a3 * b2;
    auto c2 = -(a1 * b3 - a3 * b1);
    auto c3 = a1 * b2 - a2 * b1;
    return {c1, c2, c3};
}
