// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/possible-sums.html .

std::set<int> sums(std::vector<int> coins, std::vector<int> quantity) {
    using namespace std;
    if (quantity.size() == 0) {
        return {};
    }
    vector<int> remain_coins{coins.begin() + 1, coins.end()};
    vector<int> remain_quantity{quantity.begin() + 1, quantity.end()};
    auto remain_sums = sums(remain_coins, remain_quantity);
    set<int> res;
    if (remain_sums.size() == 0) {
        int q = quantity[0];
        for (int i = 0; i <= q; i++) {
            res.insert(i * coins[0]);
        }
        return res;
    }
    int q = quantity[0];
    for (int i = 0; i <= q; i++) {
        for (auto num : remain_sums) {
            res.insert(num + i * coins[0]);
        }
    }
    return res;
}

int possibleSums(std::vector<int> coins, std::vector<int> quantity) {
    using namespace std;
    return sums(coins, quantity).size() - 1;
}
