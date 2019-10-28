// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

int alternatingCharacters(string s) {
    if (s.size() == 0) {
        return 0;
    }
    char pre = s[0];
    int count = 1;
    for (int i = 1; i < s.size(); i++) {
        char now = s[i];
        if (pre != now) {
            count++;
        }
        pre = now;
    }
    return s.size() - count;
}
