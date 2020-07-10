// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/tenis-set.html .

bool tennisSet(int score1, int score2) {
    int s1, s2;
    if (score1 >= score2) {
        s1 = score1;
        s2 = score2;
    } else {
        s1 = score2;
        s2 = score1;
    }
    if (s1 == 7) {
        return 5 <= s2 && s2 < 7;
    }
    return s1 == 6 && s2 < 5;
}
