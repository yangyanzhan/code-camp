// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/stacked-balls-3d-triangle-base.html .

#include <cmath>

using namespace std;

#define PI 3.14159265

double stack_height_3d(int layers) {
    if (layers <= 0) {
        return 0;
    }
    double a = layers - 1;
    auto b = sin(PI * 1 / 3) * a * 2 / 3;
    auto c = sqrt(a * a - b * b);
    return 1 + c;
}
