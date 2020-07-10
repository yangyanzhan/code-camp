// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/quadratic-equation.html .

std::vector<double> quadraticEquation(int a, int b, int c) {
    using namespace std;
    double delta = (double)b * b - 4.0 * a * c;
    if (delta < 0) {
        return {};
    }
    if (delta == 0) {
        return {-b / (2.0 * a)};
    }
    delta = sqrt(delta);
    vector<double> res{(-b - delta) / (2.0 * a), (-b + delta) / (2.0 * a)};
    sort(res.begin(), res.end());
    return res;
}
