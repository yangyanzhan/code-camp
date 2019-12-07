// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/valid-time.html .

#include <regex>

bool validTime(std::string time) {
    using namespace std;
    regex reg("^(\\d\\d):(\\d\\d)$");
    smatch matches;
    regex_search(time, matches, reg);
    if (matches.size() != 3) {
        return false;
    }
    int h = stoi(matches[1].str());
    int m = stoi(matches[2].str());
    return 0 <= h && h <= 23 && 0 <= m && m <= 59;
}

