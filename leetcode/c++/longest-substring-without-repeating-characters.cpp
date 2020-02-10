// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/longest-substring-without-repeating-characters.html .

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0, max_len = 0;
        unordered_map<char, int> cache;
        for (int i = 0; i < s.size(); i++) {
            auto ch = s[i];
            if (cache.find(ch) == cache.end()) {
                cache[ch] = i;
            } else {
                int pre = cache[ch];
                if (pre >= start) {
                    max_len = max(max_len, i - start);
                    start = pre + 1;
                }
                cache[ch] = i;
            }
        }
        max_len = max(max_len, (int)s.size() - start);
        return max_len;
    }
};

