// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/longest-palindromic-substring.html .

string Solution::longestPalindrome(string A) {
    int n = A.length();
    if (n <= 0)
        return A;
    vector<vector<bool>> isPalin(n, vector<bool>(n, false));
    int bestI = 0, best = 1;
    for (int i = 0; i < n; i++) {
        isPalin[i][i] = true;
    }
    for (int i = 0; i < n - 1; i++) {
        isPalin[i][i + 1] = A[i] == A[i + 1];
        if (isPalin[i][i + 1] && 2 > best) {
            best = 2;
            bestI = i;
        }
    }
    for (int len = 3; len <= n; len++) {
        for (int i = 0; i + len - 1 < n; i++) {
            int j = i + len - 1;
            if (isPalin[i + 1][j - 1] && A[i] == A[j]) {
                isPalin[i][j] = true;
            }
            if (isPalin[i][j] && len > best) {
                best = len;
                bestI = i;
            }
        }
    }
    return A.substr(bestI, best);
}
