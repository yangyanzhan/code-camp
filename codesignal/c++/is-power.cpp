// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/is-power.html .

bool isPower(int n) {
    if (n <= 1) {
        return true;
    }
    for (int base = 2; base <= sqrt(n); base++) {
        int k = log(n) / log(base);
        int num = 1;
        for (int i = 1; i <= k; i++) {
            num *= base;
        }
        if (num == n) {
            return true;
        }
    }
    return false;
}
