// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/longest-word.html .

#include <regex>

std::string longestWord(std::string text) {
    using namespace std;
    regex reg("[a-zA-Z]+");
    string res = "";
    for (auto it = sregex_iterator(text.begin(), text.end(), reg); it != sregex_iterator(); it++) {
        auto item = it->str();
        if (item.size() > res.size()) {
            res = item;
        }
    }
    return res;
}

