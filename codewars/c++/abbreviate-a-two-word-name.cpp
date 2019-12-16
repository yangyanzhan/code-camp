// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/abbreviate-a-two-word-name.html .

#include <regex>
#include <sstream>

std::string abbrevName(std::string name) {
    using namespace std;
    stringstream ss;
    regex reg("[^ ]+");
    for (auto it = sregex_iterator(name.begin(), name.end(), reg); it != sregex_iterator(); it++) {
        ss << string(1, toupper(it->str()[0])) << ".";
    }
    string res = ss.str();
    return res.substr(0, res.size() - 1);
}
