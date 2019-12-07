// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/addition-without-carrying.html .

int additionWithoutCarrying(int param1, int param2) {
    int res = 0, base = 1;
    while (param1 > 0 || param2 > 0) {
        int d1 = param1 % 10, d2 = param2 % 10;
        res += (d1 + d2) % 10 * base;
        base *= 10;
        param1 /= 10;
        param2 /= 10;
    }
    return res;
}
