// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/how-good-are-you-really.html .

#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
    using namespace std;
    int mean = 0, n = classPoints.size();
    for (auto num : classPoints) {
        mean += num;
    }
    mean /= n;
    return yourPoints > mean;
}
