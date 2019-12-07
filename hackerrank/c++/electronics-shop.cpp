// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/electronics-shop.html .

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int max_sum = -1;
    for (auto keyboard: keyboards) {
        for (auto drive: drives) {
            long long sum = (long long)keyboard + drive;
            if (sum <= b) {
                max_sum = max(max_sum, (int)sum);
            }
        }
    }
    return max_sum;
}
