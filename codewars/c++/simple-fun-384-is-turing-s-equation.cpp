// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/simple-fun-384-is-turing-s-equation.html .

#include <sstream>

using namespace std;

bool is_turing_equation(std::string s) {
    stringstream ss1, ss2, ss3;
    int c = 0;
    for (auto ch : s) {
        if (ch == '+' || ch == '=') {
            c++;
        }
        if (ch != ' ') {
            if (c == 0) {
                ss1 << (char)ch;
            } else if (c == 1) {
                ss2 << (char)ch;
            } else if (c == 2) {
                ss3 << (char)ch;
            }
        }
    }
    auto s1 = ss1.str();
    auto s2 = ss2.str();
    auto s3 = ss3.str();
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    reverse(s3.begin(), s3.end());
    auto i1 = stoi(s1);
    auto i2 = stoi(s2);
    auto i3 = stoi(s3);
    return i1 + i2 == i3;
}
