// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/are-following-patterns.html .

bool areFollowingPatterns(std::vector<std::string> strings,
                          std::vector<std::string> patterns) {
    using namespace std;
    map<string, string> cache1;
    map<string, string> cache2;
    for (int i = 0; i < patterns.size(); i++) {
        string item = strings[i], pattern = patterns[i];
        if (cache1.find(pattern) == cache1.end()) {
            cache1[pattern] = item;
        }
        if (cache2.find(item) == cache2.end()) {
            cache2[item] = pattern;
        }
        if (cache1[pattern] != item) {
            return false;
        }
        if (cache2[item] != pattern) {
            return false;
        }
    }
    return true;
}
