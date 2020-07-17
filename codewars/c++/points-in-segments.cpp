// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/points-in-segments.html .

#include <utility>
#include <vector>

using namespace std;

std::vector<int> segments(int m, const std::vector<std::pair<int, int>> &arr) {
    vector<int> res;
    for (int i = 0; i <= m; i++) {
        bool found = false;
        for (auto pair : arr) {
            if (get<0>(pair) <= i && i <= get<1>(pair)) {
                found = true;
                break;
            }
        }
        if (!found) {
            res.push_back(i);
        }
    }
    return res;
}
