// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/repeated-string.html .

long count_a(string s) {
    long res = 0;
    long idx = 0;
    while ((idx = s.find("a", idx)) != string::npos) {
        res++;
        idx++;
    }
    return res;
}

long repeatedString(string s, long n) {
    long repeats = n / (long)s.size();
    long remains = n % (long)s.size();
    return repeats * count_a(s) + count_a(s.substr(0, remains));
}
