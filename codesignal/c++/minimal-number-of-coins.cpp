// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/minimal-number-of-coins.html .

int minimalNumberOfCoins(std::vector<int> coins, int price) {
    int res = 0;
    reverse(coins.begin(), coins.end());
    for (auto coin: coins) {
        if (price <= 0) {
            break;
        }
        res += price / coin;
        price -= price / coin * coin;
    }
    return res;
}

