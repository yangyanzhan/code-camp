// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/split-address.html .

#include <regex>

std::vector<std::string> splitAddress(std::string address) {
    using namespace std;
    regex reg("([a-z]+)://([a-z]+)\\.com(/[a-z]*)?");
    smatch matches;
    regex_search(address, matches, reg);
    vector<string> res;
    for (int i = 1; i < matches.size(); i++) {
        res.push_back(matches[i].str());
    }
    if (res[2].size() > 0) {
        res[2] = res[2].substr(1);
    } else {
        res.pop_back();
    }
    return res;
}

