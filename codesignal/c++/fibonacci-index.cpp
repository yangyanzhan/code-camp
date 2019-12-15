// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/fibonacci-index.html .

int fibonacciIndex(int n) {
    int a = 0, b = 1, idx = 2;
    if (n == 1) {
        return 0;
    }
    while (true) {
        int c = a + b;
        if (to_string(c).size() == n) {
            break;
        }
        a = b;
        b = c;
        idx++;
    }
    return idx;
}
