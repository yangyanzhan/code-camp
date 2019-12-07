// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/is-ipv4-address.html .

#include <regex>

bool isIPv4Address(std::string inputString) {
    using namespace std;
    regex reg("^(\\d+)\\.(\\d+)\\.(\\d+)\\.(\\d+)$");
    smatch matches;
    regex_search(inputString, matches, reg);
    if (matches.size() != 5) {
        return false;
    }
    for (int i = 1; i <= 4; i++) {
        string item = matches[i].str();
        if (item == "0") {
            continue;
        }
        if (item[0] == '0') {
            return false;
        }
        if (item.size() > 3) {
            return false;
        }
        if (stoi(item) > 255) {
            return false;
        }
    }
    return true;
}
