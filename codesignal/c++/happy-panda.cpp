// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/happy-panda.html .

int happyPanda(std::vector<int> coins, std::vector<std::vector<int>> candies) {
    using namespace std;
    int max_happy = 0;
    int money = 0;
    int res = 0;
    for (int i = 0; i < coins.size(); i++) {
        money += coins[i];
        int cost = candies[i][0], happy = candies[i][1];
        if (money >= cost) {
            money -= cost;
            res += happy;
            max_happy = max(max_happy, happy);
        } else {
            if (happy >= max_happy) {
                res -= happy;
            }
        }
    }
    return res;
}
