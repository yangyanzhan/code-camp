// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/count-increasing-sequences.html .

int countIncreasingSequences(int n, int k) {
    int m = max(n, k - n);
    n = k;
    unsigned long long a = 1;
    for (unsigned long long i = m + 1; i <= n; i++) {
        a *= i;
    }
    unsigned long long b = 1;
    for (unsigned long long i = 1; i <= n - m; i++) {
        b *= i;
    }
    return a / b;
}

