// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/max-zeros.html .

int num_zeros(int n, int k) {
    if (n == 0) {
        return 1;
    }
    int res = 0;
    while (n >= k) {
        if (n % k == 0) {
            res++;
        }
        n /= k;
    }
    return res;
}

int maxZeros(int n) {
    int res = 0, zeros = 0;
    for (int k = 2; k <= n; k++) {
        int k_zeros = num_zeros(n, k);
        if (k_zeros > zeros) {
            res = k;
            zeros = k_zeros;
        }
    }
    return res;
}

