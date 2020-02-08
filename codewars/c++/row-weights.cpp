// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/row-weights.html .

#include <vector>
#include <utility>

using namespace std;

pair<int, int> rowWeights(const vector<int> &weights) {
    int a1 = 0, a2 = 0;
    for (int i = 0; i < weights.size(); i++) {
        if (i % 2 == 0) {
            a1 += weights[i];
        } else {
            a2 += weights[i];
        }
    }
    return {a1, a2};
}

