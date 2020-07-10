// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/clock-hand-angle.html .

double clockHandAngle(std::string time) {
    using namespace std;
    stringstream ss(time);
    int h, m, s;
    char ch;
    ss >> h;
    ss >> ch;
    ss >> m;
    ss >> ch;
    ss >> s;
    if (h >= 12) {
        h -= 12;
    }
    double a = (h + m / 60.0 + s / 3600.0) / 12.0;
    double b = (m + s / 60.0) / 60.0;
    double res = abs(a - b) * 360;
    return min(res, 360 - res);
}
