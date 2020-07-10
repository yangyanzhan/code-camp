// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/window-string.html .

string Solution::minWindow(string S, string T) {
    vector<int> needToFound(256, 0), hasFound(256, 0);
    for (char ch : T) {
        needToFound[ch]++;
    }
    int n = S.length(), begin = 0, end = 0, count = 0, bestI = -1,
        bestLen = INT_MAX;
    for (end = 0; end < n; end++) {
        char ch = S[end];
        if (needToFound[ch] == 0) {
            continue;
        }
        hasFound[ch]++;
        if (hasFound[ch] <= needToFound[ch]) {
            count++;
        }
        if (count == T.length()) {
            while (begin <= end) {
                char ch = S[begin];
                if (needToFound[ch] == 0) {
                } else if (hasFound[ch] > needToFound[ch]) {
                    hasFound[ch]--;
                } else {
                    break;
                }
                begin++;
            }
            int len = end - begin + 1;
            if (len < bestLen) {
                bestLen = len;
                bestI = begin;
            }
        }
    }
    if (bestI == -1) {
        return "";
    }
    return S.substr(bestI, bestLen);
}
