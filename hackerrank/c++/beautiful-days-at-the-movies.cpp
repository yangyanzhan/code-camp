// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/beautiful-days-at-the-movies.html .

int reversed(int n) {
    int res = 0;
    while (n > 0) {
        res *= 10;
        res += n % 10;
        n /= 10;
    }
    return res;
}

int beautifulDays(int i, int j, int k) {
    int res = 0;
    for (int n = i; n <= j; n++) {
        if (abs(n - reversed(n)) % k == 0) {
            res++;
        }
    }
    return res;
}
