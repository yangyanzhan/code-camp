// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/is-mac48-address.html .

#include <regex>

bool isMAC48Address(std::string inputString) {
    using namespace std;
    inputString += "-";
    regex reg1("^([0-9A-F][0-9A-F]-)+$");
    smatch matches;
    regex_search(inputString, matches, reg1);
    if (matches.size() == 0) {
        return false;
    }
    regex reg2("([0-9A-F][0-9A-F]-)");
    return distance(
               sregex_iterator(inputString.begin(), inputString.end(), reg2),
               sregex_iterator()) == 6;
}
