// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/scramble-string.html .

map<pair<string, string>, bool> cache;


bool isScramble1(const string s1, const string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    if (s1 == s2) {
        return true;
    }
    pair<string, string> p(s1, s2);
    if (cache.find(p) != cache.end()) {
        return cache[p];
    }
    vector<int> counts(256, 0);
    for (char c1: s1) {
        counts[c1]++;
    }
    for (char c2: s2) {
        counts[c2]--;
    }
    bool scramble = true;
    for (int i = 0; i < 256; i++) {
        if (counts[i] != 0) {
            scramble = false;
            break;
        }
    }
    if (!scramble) {
        cache[p] = scramble;
        return scramble;
    }
    scramble = false;
    int n = s1.length();
    for (int len = 1; len < n; len++) {
        string s11 = s1.substr(0, len);
        string s12 = s1.substr(len);
        string s21 = s2.substr(0, len);
        string s22 = s2.substr(len);
        if (isScramble1(s11, s21) && isScramble1(s12, s22)) {
            scramble = true;
            break;
        }
        s21 = s2.substr(0, n - len);
        s22 = s2.substr(n - len);
        if (isScramble1(s11, s22) && isScramble1(s12, s21)) {
            scramble = true;
            break;
        }
    }
    cache[p] = scramble;
    return scramble;
}

int Solution::isScramble(const string s1, const string s2) {
    cache.clear();
    return isScramble1(s1, s2);
}
