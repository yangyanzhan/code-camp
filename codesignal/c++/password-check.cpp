// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/password-check.html .

#include <regex>

bool passwordCheck(std::string inputString) {
    using namespace std;
    if (inputString.size() < 5) {
        return false;
    }
    smatch matches;
    regex reg1("[A-Z]");
    regex_search(inputString, matches, reg1);
    if (matches.size() == 0) {
        return false;
    }
    regex reg2("[a-z]");
    regex_search(inputString, matches, reg2);
    if (matches.size() == 0) {
        return false;
    }
    regex reg3("[0-9]");
    regex_search(inputString, matches, reg3);
    if (matches.size() == 0) {
        return false;
    }
    return true;
}
