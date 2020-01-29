// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/amend-the-sentence.html .

#include <regex>

std::string amendTheSentence(std::string s) {
    using namespace std;
    regex reg("[A-Z]?[a-z]*");
    vector<string> items;
    for (auto it = sregex_iterator(s.begin(), s.end(), reg); it != sregex_iterator(); it++) {
        string item = it->str();
        if (item.size() == 0) {
            continue;
        }
        item[0] = tolower(item[0]);
        items.push_back(item);
    }
    string res = "";
    for (int i = 0; i < items.size(); i++) {
        if (i > 0) {
            res += " ";
        }
        res += items[i];
    }
    return res;
}

