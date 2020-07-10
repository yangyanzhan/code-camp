// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/min-steps-in-infinite-grid.html .

int Solution::coverPoints(vector<int> &X, vector<int> &Y) {
    int n = X.size(), res = 0;
    for (int i = 1; i < n; i++) {
        int diff0 = abs(X[i] - X[i - 1]);
        int diff1 = abs(Y[i] - Y[i - 1]);
        res += max(diff0, diff1);
    }
    return res;
}
