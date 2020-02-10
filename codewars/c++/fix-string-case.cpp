// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/fix-string-case.html .

#include <string>

std::string solve(const std::string &str) {
    using namespace std;
    int c1 = 0, c2 = 0;
    for (auto &ch: str) {
        if (tolower(ch) == ch) {
            c1++;
        } else {
            c2++;
        }
    }
    string res;
    for (auto &ch: str) {
        if (c1 >= c2) {
            res += tolower(ch);
        } else {
            res += toupper(ch);
        }
    }
    return res;
}

