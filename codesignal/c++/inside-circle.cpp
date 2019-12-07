// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/inside-circle.html .

bool insideCircle(std::vector<int> point, std::vector<int> center, int radius) {
    using namespace std;
    double a = point[0], b = point[1], c = center[0], d = center[1], dx = a - c, dy = b - d, r = radius;
    return dx * dx + dy * dy <= r * r;
}

