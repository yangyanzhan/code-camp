// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/most-sales.html .

#include <string>
#include <vector>

std::vector<std::string> top3(
        const std::vector<std::string> &products,
        const std::vector<int> &amounts,
        const std::vector<int> &prices) {
    using namespace std;
    vector<int> idxes;
    int n = products.size();
    for (int i = 0; i < n; i++) {
        idxes.push_back(i);
    }
    sort(idxes.begin(), idxes.end(), [&] (int i, int j) {
        int m1 = amounts[i] * prices[i];
        int m2 = amounts[j] * prices[j];
        if (m1 != m2) {
            return m1 > m2;
        }
        return i < j;
    });
    vector<string> res;
    for (int i = 0; i < 3; i++) {
        res.push_back(products[idxes[i]]);
    }
    return res;
}

