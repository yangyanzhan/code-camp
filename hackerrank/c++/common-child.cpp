// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

int commonChild(string &s1, string &s2, int n1, int n2, vector<vector<int>> &cache) {
    if (cache[n1 - 1][n2 - 1] != -1) {
        return cache[n1 - 1][n2 - 1];
    }
    int res = 0;
    if (s1[s1.size() - n1] == s2[s2.size() - n2]) {
        if (n1 == 1 || n2 == 1) {
            res = 1;
        } else {
            res = 1 + commonChild(s1, s2, n1 - 1, n2 - 1, cache);
        }
    }
    if (n1 > 1) {
        res = max(res, commonChild(s1, s2, n1 - 1, n2, cache));
    }
    if (n2 > 1) {
        res = max(res, commonChild(s1, s2, n1, n2 - 1, cache));
    }
    cache[n1 - 1][n2 - 1] = res;
    return res;
}

int commonChild(string s1, string s2) {
    int n1 = s1.size();
    int n2 = s2.size();
    vector<vector<int>> cache;
    for (int i = 0; i < n1; i++) {
        cache.push_back(vector<int>(n2, -1));
    }
    return commonChild(s1, s2, n1, n2, cache);
}
