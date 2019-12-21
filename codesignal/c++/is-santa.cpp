// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/is-santa.html .

#include <regex>

std::string isSanta(std::string s) {
    using namespace std;
    for (auto &ch: s) {
        ch = tolower(ch);
    }
    regex reg("hohoho");
    if (regex_search(s, reg)) {
        return "It is Santa! Merry Christmas and a Happy New Year!";
    }
    return "Hey, someone! Merry Christmas and have a nice day!";
}

