// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/geometry-basics-triangle-perimeter-in-2d.html .

using namespace std;

#include <cmath>

double dist(const Point &p1, const Point &p2) {
    double x1 = p1.x, y1 = p1.y;
    double x2 = p2.x, y2 = p2.y;
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

double triangle_perimeter(const Triangle &t) {
    return dist(t.a, t.b) + dist(t.b, t.c) + dist(t.c, t.a);
}
