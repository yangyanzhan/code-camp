// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/making-anagrams.html .

int makingAnagrams(string s1, string s2) {
    map<char, int> cache;
    for (auto ch: s1) {
        if (cache.find(ch) == cache.end()) {
            cache[ch] = 0;
        }
        cache[ch]++;
    }
    for (auto ch: s2) {
        if (cache.find(ch) == cache.end()) {
            cache[ch] = 0;
        }
        cache[ch]--;
    }
    int res = 0;
    for (auto it: cache) {
        res += abs(it.second);
    }
    return res;
}
