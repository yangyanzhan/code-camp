// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/curing-arachnophobia.html .

#include <cmath>
#include <sstream>

using namespace std;

std::string draw_spider(int legSize, int bodySize, char mouth, char eye) {
    vector<vector<string>> legs = {
        {"^", "^"}, {"/\\", "/\\"}, {"/╲", "╱\\"}, {"╱╲", "╱╲"}};
    stringstream ss;
    ss << legs[legSize - 1][0];
    for (int i = 0; i < bodySize; i++) {
        ss << "(";
    }
    for (int i = 0; i < pow(2, bodySize) / 2; i++) {
        ss << (char)eye;
    }
    ss << (char)mouth;
    for (int i = 0; i < pow(2, bodySize) / 2; i++) {
        ss << (char)eye;
    }
    for (int i = 0; i < bodySize; i++) {
        ss << ")";
    }
    ss << legs[legSize - 1][1];
    return ss.str();
}
