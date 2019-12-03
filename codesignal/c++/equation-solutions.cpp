// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/equation-solutions.html .

int equationSolutions(int l, int r) {
    int res = 0;
    for (long long a = max(0, l); a <= r; a++) {
        auto a3 = a * a * a;
        long long b = sqrt(a3);
        if (b * b != a3) {
            continue;
        }
        if (l <= b && b <= r) {
            res++;
        }
        if (b == -b) {
            continue;
        }
        if (l <= -b && -b <= r) {
            res++;
        }
        if (b > max(abs(l), abs(r))) {
            break;
        }
    }
    return res;
}

