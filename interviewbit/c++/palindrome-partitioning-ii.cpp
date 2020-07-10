// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/palindrome-partitioning-ii.html .

int Solution::minCut(string s) {
    const int N = s.size();
    if (N <= 1)
        return 0;

    int i, j, minCUTS[N + 1];
    for (i = 0; i <= N; ++i)
        minCUTS[i] = i - 1;

    for (i = 1; i < N; i++) {
        for (j = 0; (i - j) >= 0 && (i + j) < N && s[i - j] == s[i + j]; ++j)
            minCUTS[i + j + 1] = min(minCUTS[i + j + 1], 1 + minCUTS[i - j]);

        for (j = 0; (i - j - 1) >= 0 && (i + j) < N && s[i - j - 1] == s[i + j];
             ++j)
            minCUTS[i + j + 1] =
                min(minCUTS[i + j + 1], 1 + minCUTS[i - j - 1]);
    }
    return minCUTS[N];
}
