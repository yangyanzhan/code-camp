// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/implement-power-function.html .

int Solution::pow(int x, int n, int d) {
    if (n == 0) return 1 % d;
    long long res = pow(x, n / 2, d);
    if (n % 2 == 0) {
        res = (res * res) % d;
    } else {
        res = (res * res) % d;
        res = (x * res) % d;
    }
    return (res + d) % d;
}

