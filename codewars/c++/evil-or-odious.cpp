// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/evil-or-odious.html .

std::string evil(int n) {
    int n1 = 0;
    while (n > 0) {
        int d = n % 2;
        if (d == 1) {
            n1++;
        }
        n /= 2;
    }
    return n1 % 2 == 0 ? "It's Evil!" : "It's Odious!";
}

