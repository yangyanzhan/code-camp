// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/exes-and-ohs.html .

bool XO(const std::string& str) {
    using namespace std;
    int c1 = 0, c2 = 0;
    for (auto ch: str) {
        if (tolower(ch) == 'o') {
            c1++;
        } else if (tolower(ch) == 'x') {
            c2++;
        }
    }
    return c1 == c2;
}

