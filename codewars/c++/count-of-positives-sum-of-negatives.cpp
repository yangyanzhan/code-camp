// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/count-of-positives-sum-of-negatives.html .

#include <vector>

std::vector<int> countPositivesSumNegatives(std::vector<int> input) {
    using namespace std;
    if (input.empty()) {
        return {};
    }
    int pc = 0, ns = 0;
    for (auto num: input) {
        if (num > 0) {
            pc++;
        } else if (num < 0) {
            ns += num;
        }
    }
    return {pc, ns};
}
