// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/simple-fun-176-reverse-letter.html .

#include <sstream>

using namespace std;

std::string reverse_letter(const std::string &str) {
    stringstream ss;
    for (int i = str.size() - 1; i >= 0; i--) {
        auto ch = str[i];
        if (isalpha(ch)) {
            ss << ch;
        }
    }
    return ss.str();
}
