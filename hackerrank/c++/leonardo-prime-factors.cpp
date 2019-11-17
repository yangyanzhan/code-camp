// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/leonardo-prime-factors.html .

int primeCount(long n) {
    int nums[1001] = {1, 1};
    for (int i = 2; i <= 1000; i++) {
        if (nums[i] != 0) {
            continue;
        }
        for (int j = 2; i * j <= 1000; j++) {
            nums[i * j] = 1;
        }
    }
    int res = 0;
    unsigned long long acc = 1;
    for (int i = 2; i <= 1000; i++) {
        if (nums[i] == 1) {
            continue;
        }
        acc *= i;
        if (acc <= n) {
            res++;
        } else {
            break;
        }
    }
    return res;
}
