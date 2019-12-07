// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/common-character-count.html .

int commonCharacterCount(std::string s1, std::string s2) {
    std::map<char, int> cache1, cache2;
    for (auto ch: s1) {
        if (cache1.find(ch) == cache1.end()) {
            cache1[ch] = 0;
        }
        cache1[ch]++;
    }
    for (auto ch: s2) {
        if (cache2.find(ch) == cache2.end()) {
            cache2[ch] = 0;
        }
        cache2[ch]++;
    }
    int res = 0;
    for (auto pair: cache1) {
        char ch = pair.first;
        int count = pair.second;
        if (cache2.find(ch) != cache2.end()) {
            res += min(count, cache2[ch]);
        }
    }
    return res;
}
