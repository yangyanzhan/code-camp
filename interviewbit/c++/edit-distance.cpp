// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/edit-distance.html .

int Solution::minDistance(string word1, string word2) {
    int m = word1.length(), n = word2.length();
    vector<vector<int>> cache(m + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= m; i++) {
        cache[i][0] = i;
    }
    for (int j = 1; j <= n; j++) {
        cache[0][j] = j;
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (word1[i - 1] == word2[j - 1]) {
                cache[i][j] = cache[i - 1][j - 1];
            } else {
                cache[i][j] = min(cache[i - 1][j - 1],
                                  min(cache[i - 1][j], cache[i][j - 1])) +
                              1;
            }
        }
    }
    return cache[m][n];
}
