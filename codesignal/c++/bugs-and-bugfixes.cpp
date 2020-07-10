// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/bugs-and-bugfixes.html .

int bugsAndBugfixes(std::string rules) {
    std::regex pattern("(\\d*)d(\\d+)(-\\d+|\\+\\d+)?");

    std::sregex_iterator it(rules.cbegin(), rules.cend(), pattern);
    std::sregex_iterator end;

    int res = 0;
    while (it != end) {
        int rolls = it->str(1).empty() ? 1 : std::stoi(it->str(1));
        int dieType = std::stoi(it->str(2));
        int formulaMax = rolls * dieType;

        if (!it->str(3).empty()) {
            if (it->str(3)[0] == '-') {
                formulaMax -= std::stoi(it->str(3).substr(1));
            } else {
                formulaMax += std::stoi(it->str(3).substr(1));
            }
        }

        res += formulaMax;
        it++;
    }

    return res;
}
