// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/best-time-to-buy-and-sell-stocks-ii.html .

int Solution::maxProfit(const vector<int> &A) {
    int n = A.size(), best = 0;
    for (int i = 0; i < n - 1; i++) {
        int profit = A[i + 1] - A[i];
        if (profit > 0) {
            best += profit;
        }
    }
    return best;
}
