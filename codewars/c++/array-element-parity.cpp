// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/array-element-parity.html .

#include <algorithm>
#include <map>

using namespace std;

int solve(std::vector<int> v) {
    sort(v.begin(), v.end());
    auto it = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), it));
    int res = 0;
    for (auto num : v) {
        res += num;
    }
    return res;
}
