// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/comfortable-numbers.html .

int getDigits(int n) {
    int res = 0;
    while (n > 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}

bool isComfort(int a, int b) {
    int digits = getDigits(a);
    return a != b && (a - digits <= b) && (b <= a + digits);
}

int comfortableNumbers(int L, int R) {
    int res = 0;
    for (int a = L; a < R; a++) {
        for (int b = a + 1; b <= R; b++) {
            if (isComfort(a, b) && isComfort(b, a)) {
                res++;
            }
        }
    }
    return res;
}

