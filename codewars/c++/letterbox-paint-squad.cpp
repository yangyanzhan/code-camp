// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/letterbox-paint-squad.html .

using namespace std;

#include <array>

array<int, 10> paint_letterboxes(int start, int end) {
    array<int, 10> res = {0};
    for (int n = start; n <= end; n++) {
        auto item = to_string(n);
        for (auto &ch : item) {
            res[ch - '0']++;
        }
    }
    return res;
}
