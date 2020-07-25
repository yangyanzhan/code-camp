// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/convert-the-score.html .

#include <algorithm>
#include <string>
#include <vector>

using namespace std;

std::vector<int> scoreboard(const std::string &s) {
    vector<string> items = {"nil",  "one", "two",   "three", "four",
                            "five", "six", "seven", "eight", "nine"};
    int idx2 = s.rfind(" ");
    auto item2 = s.substr(idx2 + 1);
    int idx1 = s.rfind(" ", idx2 - 1);
    auto item1 = s.substr(0, idx2);
    if (idx1 != string::npos) {
        item1 = s.substr(idx1 + 1, idx2 - idx1 - 1);
    }
    int r1 = distance(items.begin(), find(items.begin(), items.end(), item1));
    int r2 = distance(items.begin(), find(items.begin(), items.end(), item2));
    return {r1, r2};
}
