// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/special-string-again.html .

long substrCount(int n, string s) {
    if (s.size() == 0) {
        return 0;
    }
    vector<tuple<char, long>> pairs;
    char pre = '\0';
    long count = 0;
    for (long i = 0; i < s.size(); i++) {
        char now = s[i];
        if (now == pre) {
            count++;
        } else {
            if (pre != '\0') {
                pairs.push_back(make_pair(pre, count));
            }
            pre = now;
            count = 1;
        }
    }
    pairs.push_back(make_pair(pre, count));
    long res = 0;
    for (auto pair : pairs) {
        long n = get<1>(pair);
        res += n * (n + 1) / 2;
    }
    for (int i = 1; i < pairs.size() - 1; i++) {
        long n = get<1>(pairs[i]);
        if (n == 1 && get<0>(pairs[i - 1]) == get<0>(pairs[i + 1])) {
            res += min(get<1>(pairs[i - 1]), get<1>(pairs[i + 1]));
        }
    }
    return res;
}
