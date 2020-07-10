// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/dungeon-princess.html .

int Solution::calculateMinimumHP(vector<vector<int>> &dungeon) {
    int m = dungeon.size();
    if (m <= 0) {
        return 1;
    }
    int n = dungeon[0].size();
    if (n <= 0) {
        return 1;
    }
    vector<vector<int>> cache(m, vector<int>(n, 0));
    cache[m - 1][n - 1] = max(1 - dungeon[m - 1][n - 1], 1);
    for (int i = m - 2; i >= 0; i--) {
        cache[i][n - 1] = max(cache[i + 1][n - 1] - dungeon[i][n - 1], 1);
    }
    for (int j = n - 2; j >= 0; j--) {
        cache[m - 1][j] = max(cache[m - 1][j + 1] - dungeon[m - 1][j], 1);
    }
    for (int i = m - 2; i >= 0; i--) {
        for (int j = n - 2; j >= 0; j--) {
            cache[i][j] = min(cache[i + 1][j], cache[i][j + 1]) - dungeon[i][j];
            cache[i][j] = max(cache[i][j], 1);
        }
    }
    return cache[0][0];
}
