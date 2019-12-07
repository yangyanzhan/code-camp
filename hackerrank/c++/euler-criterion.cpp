// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/euler-criterion.html .

int pow_mod(int a, int b, int m) {
    if (b == 0) {
        return 1;
    }
    long long res = pow_mod(a, b / 2, m);
    res *= res;
    res %= m;
    if (b % 2 == 1) {
        res *= a;
        res %= m;
    }
    return res;
}

string solve(int a, int m) {
    int res = pow_mod(a, (m - 1) / 2, m);
    if (res == 1 || a == 0 || a == 2) {
        return "YES";
    }
    return "NO";
}
