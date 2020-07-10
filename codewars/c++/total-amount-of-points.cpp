// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/total-amount-of-points.html .

#include <array>
#include <regex>
#include <string>

int points(const std::array<std::string, 10> &games) {
    using namespace std;
    int res = 0;
    for (auto game : games) {
        regex reg("(\\d+):(\\d+)");
        smatch matches;
        regex_search(game, matches, reg);
        int a = stoi(matches[1].str());
        int b = stoi(matches[2].str());
        if (a > b) {
            res += 3;
        } else if (a == b) {
            res += 1;
        }
    }
    return res;
}
