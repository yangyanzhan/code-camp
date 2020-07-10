// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/file-naming.html .

#include <regex>

std::vector<std::string> fileNaming(std::vector<std::string> names) {
    using namespace std;
    if (names.size() <= 1) {
        return names;
    }
    set<string> seen{names[0]};
    for (int i = 1; i < names.size(); i++) {
        string now = names[i];
        if (seen.find(now) != seen.end()) {
            for (int idx = 1;; idx++) {
                string fixed = now + "(" + to_string(idx) + ")";
                if (seen.find(fixed) == seen.end()) {
                    now = fixed;
                    break;
                }
            }
        }
        seen.insert(now);
        names[i] = now;
    }
    return names;
}
