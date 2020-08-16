// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/sweet-dreams-are-made-of-cheese.html .

using namespace std;

#include <cmath>
#include <numeric>

std::string payCheese(const std::vector<int> &arr) {
    constexpr auto staffSize = 4;
    constexpr auto wheels_per_hour = 100.0;
    constexpr auto pay_per_hour = 8.75;
    int amount =
        std::ceil(std::accumulate(begin(arr), end(arr), 0) / wheels_per_hour) *
        staffSize * pay_per_hour;
    return "£" + std::to_string(amount);
}
