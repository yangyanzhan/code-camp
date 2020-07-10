// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/bit237.html .

int get(int n, int k) {
    using namespace std;
    k--;
    int mask = 1 << k;
    return (n & mask) >> k;
}

int clear(int n, int k) {
    k--;
    int mask = ~(1 << k);
    return n & mask;
}

int set(int n, int k) {
    if (get(n, k)) {
        return n;
    }
    k--;
    return n + (1 << k);
}

int bit237(int n) {
    int s = get(n, 2) + get(n, 3) + get(n, 7);
    if (s <= 1) {
        n = clear(n, 2);
        n = clear(n, 3);
        n = clear(n, 7);
        return n;
    }
    n = set(n, 2);
    n = set(n, 3);
    n = set(n, 7);
    return n;
}
