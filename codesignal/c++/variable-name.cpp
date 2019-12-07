// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/variable-name.html .

#include <regex>

bool variableName(std::string name) {
    using namespace std;
    regex reg("^[\\da-zA-Z_]+$");
    smatch matches;
    regex_search(name, matches, reg);
    if (matches.size() == 0) {
        return false;
    }
    return name[0] < '0' || name[0] > '9';
}
