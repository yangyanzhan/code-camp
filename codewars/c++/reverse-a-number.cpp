// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/reverse-a-number.html .

long long reverseNumber(long long n) {
    int flag = n >= 0 ? 1 : -1;
    long long res = 0;
    n = n >= 0 ? n : -n;
    while (n > 0) {
        res *= 10;
        res += n % 10;
        n /= 10;
    }
    res *= flag;
    return res;
}
