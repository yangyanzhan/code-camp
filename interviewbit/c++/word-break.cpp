// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/word-break.html .

int Solution::wordBreak(string s, vector<string> &wordDict) {
    int n = s.length();
    vector<bool> cache(n + 1, true);
    for (int len = 1; len <= n; len++) {
        bool found = false;
        for (string word : wordDict) {
            int wordLen = word.length();
            if (wordLen > len) {
                continue;
            }
            if (s.substr(len - wordLen, wordLen) == word &&
                cache[len - wordLen]) {
                found = true;
                break;
            }
        }
        cache[len] = found;
    }
    return cache[n];
}
