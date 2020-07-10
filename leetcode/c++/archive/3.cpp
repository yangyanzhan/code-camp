// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

class Solution {
  public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if (n == 0) {
            return 0;
        }
        int start = 0, end = 0;
        map<char, int> cache;
        cache[s[0]] = 0;
        int maxlen = 1;
        while (++end < n) {
            char ch = s[end];
            if (cache.find(ch) == cache.end()) {
                cache[ch] = end;
            } else if (cache[ch] < start) {
                cache[ch] = end;
            } else {
                start = cache[ch] + 1;
                cache[ch] = end;
            }
            int len = end - start + 1;
            if (len > maxlen) {
                maxlen = len;
            }
        }
        return maxlen;
    }
};
