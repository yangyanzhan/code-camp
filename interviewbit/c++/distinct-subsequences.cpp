// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/distinct-subsequences.html .

int Solution::numDistinct(string s, string t) {
    int m = s.length(), n = t.length();
    vector<vector<int>> cache(m + 1, vector<int>(n + 1, 0));
    cache[0][0] = 1;
    for (int i = 1; i <= m; i++) {
        cache[i][0] = 1;
        for (int j = 1; j <= n; j++) {
            cache[i][j] = cache[i - 1][j];
            if (s[i - 1] == t[j - 1]) {
                cache[i][j] += cache[i - 1][j - 1];
            }
        }
    }
    return cache[m][n];
}
