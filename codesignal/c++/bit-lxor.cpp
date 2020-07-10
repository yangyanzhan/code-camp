// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/bit-lxor.html .

int size(int n) {
    using namespace std;
    if (n == 0) {
        return 0;
    }
    if (n < 0) {
        n *= -1;
    }
    return log2(n) + 1;
}

int bitLXor(int a, int b) {
    using namespace std;
    int n1 = size(a), n2 = size(b), n = max(n1, n2);
    a = a << (n - n1);
    b = b << (n - n2);
    return a ^ b;
}
