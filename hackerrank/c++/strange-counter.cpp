// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/strange-counter.html .

long strangeCounter(long long t) {
    long long n = ceil(log2(t / 3.0 + 1));
    long long start = 1;
    for (int i = 2; i <= n; i++) {
        start *= 2;
    }
    start *= 3;
    long long pre = 0;
    for (long long m = 1; m < n; m++) {
        long long start = 1;
        for (int i = 2; i <= m; i++) {
            start *= 2;
        }
        start *= 3;
        pre += start;
    }
    t -= pre;
    return start - t + 1;
}
