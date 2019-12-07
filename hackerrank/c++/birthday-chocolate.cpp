// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/birthday-chocolate.html .

int birthday(vector<int> s, int d, int m) {
    if (s.size() < m) {
        return 0;
    }
    long long total = 0;
    for (int i = 0; i < m; i++) {
        total += s[i];
    }
    int res = 0;
    if (total == d) {
        res++;
    }
    for (int i = m; i < s.size(); i++) {
        total -= s[i - m];
        total += s[i];
        if (total == d) {
            res++;
        }
    }
    return res;
}
