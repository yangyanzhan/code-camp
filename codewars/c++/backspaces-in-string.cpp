// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/backspaces-in-string.html .

using namespace std;

std::string cleanString(const std::string &s) {
    string res;
    for (auto ch : s) {
        if (ch == '#') {
            if (res.size() > 0) {
                res = res.substr(0, res.size() - 1);
            }
        } else {
            res.push_back(ch);
        }
    }
    return res;
}
