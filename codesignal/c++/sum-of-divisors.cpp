// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/sum-of-divisors.html .

int sumOfDivisors(int n) {
    int res = 0, half = sqrt(n);
    for (int i = 1; i <= half; i++) {
        if (n % i == 0) {
            res += i;
            res += n / i;
        }
    }
    if (half * half == n) {
        res -= half;
    }
    return res;
}

