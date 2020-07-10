// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/number-of-even-digits.html .

int numberOfEvenDigits(int n) {
    if (n == 0) {
        return 1;
    }
    int res = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            res++;
        }
        n /= 10;
    }
    return res;
}
