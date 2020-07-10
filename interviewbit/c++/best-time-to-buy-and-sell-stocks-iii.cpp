// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/best-time-to-buy-and-sell-stocks-iii.html .

int Solution::maxProfit(const vector<int> &A) {
    int m = 2, n = A.size(), best = 0;
    if (n <= 1) {
        return 0;
    }
    vector<vector<int>> profits(m + 1, vector<int>(n, 0));
    for (int i = 1; i <= m; i++) {
        int preBest = profits[i - 1][0] - A[0];
        for (int j = 1; j < n; j++) {
            profits[i][j] = max(profits[i][j - 1], preBest + A[j]);
            preBest = max(preBest, profits[i - 1][j] - A[j]);
            best = max(best, profits[i][j]);
        }
    }
    return best;
}
