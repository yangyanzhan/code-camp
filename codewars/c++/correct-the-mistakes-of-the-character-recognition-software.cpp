// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/correct-the-mistakes-of-the-character-recognition-software.html .

#include <string>
#include <regex>

std::string correct(std::string str) {
    using namespace std;
    string s = str;
    map<string, string> cache;
    cache["5"] = "S";
    cache["0"] = "O";
    cache["1"] = "I";
    for (auto pair: cache) {
        string from = pair.first, to = pair.second;
        regex reg(from);
        while (regex_search(s, reg)) {
            s = regex_replace(s, reg, to);
        }
    }
    return s;
}
