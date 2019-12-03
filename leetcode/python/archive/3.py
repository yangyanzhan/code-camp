#!/usr/bin/env python

__author__ = "yangyanzhan"
__email__ = "yangyanzhan@gmail.com"
__url__ = "https://github.com/yangyanzhan/code-camp"
__blog__ = "https://yangyanzhan.github.io"
__youtube__ = "https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber"
__twitter__ = "https://twitter.com/YangYanzhan"

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n = len(s)
        if n == 0:
            return 0
        start = 0
        end = 0
        cache = {}
        cache[s[0]] = 0
        maxlen = 1
        while end + 1 < n:
            end = end + 1
            ch = s[end]
            if ch not in cache:
                cache[ch] = end
            elif cache[ch] < start:
                cache[ch] = end
            else:
                start = cache[ch] + 1
                cache[ch] = end
            length = end - start + 1
            if length > maxlen:
                maxlen = length
        return maxlen
