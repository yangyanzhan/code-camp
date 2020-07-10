// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/minimum-number-of-steps-to-make-two-strings-anagram.html .

class Solution {
  public:
    int minSteps(string s, string t) {
        map<char, int> cache;
        for (auto ch : s) {
            if (cache.find(ch) == cache.end()) {
                cache[ch] = 0;
            }
            cache[ch]++;
        }
        for (auto ch : t) {
            if (cache.find(ch) == cache.end()) {
                cache[ch] = 0;
            }
            cache[ch]--;
        }
        int res = 0;
        for (auto pair : cache) {
            res += abs(pair.second);
        }
        return res / 2;
    }
};
