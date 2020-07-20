// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/vaporcode.html .

#include <sstream>
#include <string>

using namespace std;

std::string vaporcode(const std::string &str) {
    stringstream ss;
    int n = str.size();
    for (int i = 0; i < n; i++) {
        auto now = (char)toupper(str[i]);
        if (now == ' ') {
            continue;
        }
        ss << now;
        if (i != n - 1) {
            ss << "  ";
        }
    }
    auto res = ss.str();
    for (int j = res.size() - 1; j >= 0; j--) {
        if (res[j] != ' ') {
            res = res.substr(0, j + 1);
            break;
        }
    }
    return res;
}
