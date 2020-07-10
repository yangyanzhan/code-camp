// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/number-of-people-in-the-bus.html .

#include <utility>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>> &busStops) {
    using namespace std;
    int res = 0;
    for (auto stop : busStops) {
        res += get<0>(stop) - get<1>(stop);
    }
    return res;
}
