// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

int divisors(int n) {
    if (n % 2 != 0) {
        return 0;
    }
    n /= 2;
    int res = 0;
    int half = floor(sqrt(n));
    for (int i = 1; i <= half; i++) {
        if (n % i == 0) {
            res++;
        }
    }
    res *= 2;
    if (n % half == 0 && half * half == n) {
        res--;
    }
    return res;
}
