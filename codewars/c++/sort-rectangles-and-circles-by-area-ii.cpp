// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/sort-rectangles-and-circles-by-area-ii.html .

#include <algorithm>
#include <cmath>
#include <utility>
#include <vector>

using vec_rect_circle = std::vector<std::pair<double, double>>;

using namespace std;

double area(pair<double, double> xy) {
    auto x = get<0>(xy);
    auto y = get<1>(xy);
    if (y == 0) {
        return M_PI * x * x;
    } else {
        return x * y;
    }
}

vec_rect_circle sort_by_area(vec_rect_circle v) {
    sort(v.begin(), v.end(),
         [](pair<double, double> a, pair<double, double> b) {
             return area(a) < area(b);
         });
    return v;
}
