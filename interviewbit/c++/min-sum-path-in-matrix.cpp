// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/min-sum-path-in-matrix.html .

int Solution::minPathSum(vector<vector<int>> &grid) {
    int m = grid.size();
    if (m == 0) {
        return 0;
    }
    int n = grid[0].size();
    if (n == 0) {
        return 0;
    }
    vector<vector<int>> cache = grid;
    for (int j = 1; j < n; j++) {
        cache[0][j] += cache[0][j - 1];
    }
    for (int i = 1; i < m; i++) {
        cache[i][0] += cache[i - 1][0];
        for (int j = 1; j < n; j++) {
            cache[i][j] += min(cache[i - 1][j], cache[i][j - 1]);
        }
    }
    return cache[m - 1][n - 1];
}
