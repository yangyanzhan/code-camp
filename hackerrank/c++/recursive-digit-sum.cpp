// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

unsigned long long superDigit(unsigned long long n) {
    if (n < 10) {
        return n;
    }
    unsigned long long res = 0;
    while (n >= 10) {
        res += n % 10;
        n /= 10;
    }
    res += n;
    return superDigit(res);
}

int superDigit(string n, int k) {
    unsigned long long res = 0;
    for (char ch: n) {
        res += ch - '0';
    }
    res *= k;
    return superDigit(res);
}
