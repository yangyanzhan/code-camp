// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/unique-paths-in-a-grid.html .

int Solution::uniquePathsWithObstacles(vector<vector<int>> &A) {
    int m = A.size();
    if (m == 0) {
        return 0;
    }
    int n = A[0].size();
    if (n == 0) {
        return 0;
    }
    vector<vector<int>> cache(m, vector<int>(n, 0));
    for (int i = m - 1; i >= 0; i--) {
        if (A[i][n - 1] == 0) {
            cache[i][n - 1] = 1;
        } else {
            break;
        }
    }
    for (int j = n - 1; j >= 0; j--) {
        if (A[m - 1][j] == 0) {
            cache[m - 1][j] = 1;
        } else {
            break;
        }
    }
    for (int i = m - 2; i >= 0; i--) {
        for (int j = n - 2; j >= 0; j--) {
            if (A[i][j] == 0) {
                cache[i][j] = cache[i + 1][j] + cache[i][j + 1];
            }
        }
    }
    return cache[0][0];
}
