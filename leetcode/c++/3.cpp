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
