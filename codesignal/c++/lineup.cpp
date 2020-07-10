// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/lineup.html .

int lineUp(std::string commands) {
    using namespace std;
    int res = 0, a = 0, b = 0;
    for (auto ch : commands) {
        if (ch == 'L') {
            a--;
            b++;
        } else if (ch == 'R') {
            a++;
            b--;
        } else if (ch == 'A') {
            a += 2;
            b += 2;
        }
        a += 4;
        b += 4;
        a %= 4;
        b %= 4;
        if (a == b) {
            res++;
        }
    }
    return res;
}
