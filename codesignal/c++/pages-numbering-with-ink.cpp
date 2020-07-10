// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/pages-numbering-with-ink.html .

int getDigits(int num) {
    if (num == 0)
        return 1;
    int res = 0;
    while (num > 0) {
        res++;
        num /= 10;
    }
    return res;
}

int pagesNumberingWithInk(int current, int numberOfDigits) {
    int digits = getDigits(current);
    while (numberOfDigits >= digits) {
        current++;
        numberOfDigits -= digits;
        digits = getDigits(current);
    }
    return current - 1;
}
