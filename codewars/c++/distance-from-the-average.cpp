// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/distance-from-the-average.html .

#include <cmath>

std::vector<double> distancesFromAverage(std::vector<int> input) {
    using namespace std;
    vector<double> res;
    double sum = 0;
    for (auto num: input) {
        sum += num;
    }
    double mean = sum / input.size();
    for (auto num: input) {
        res.push_back(round((mean - num) * 100) / 100);
    }
    return res;
}

