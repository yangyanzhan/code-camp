// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/all-longest-strings.html .

std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    std::vector<std::string> res;
    for (auto item: inputArray) {
        if (res.empty()) {
            res.push_back(item);
        } else {
            if (item.size() == res[0].size()) {
                res.push_back(item);
            } else if (item.size() > res[0].size()) {
                res.clear();
                res.push_back(item);
            }
        }
    }
    return res;
}
