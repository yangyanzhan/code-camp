#!/usr/bin/env python

__author__ = "yangyanzhan"
__email__ = "yangyanzhan@gmail.com"
__url__ = "https://github.com/yangyanzhan/code-camp"
__blog__ = "https://yanzhan.site"
__youtube__ = "https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber"
__twitter__ = "https://twitter.com/YangYanzhan"

class Solution:
    def longestPalindrome(self, s: str) -> str:
        n = len(s)
        if n == 0:
            return ""
        max_len = 1
        res_i = 0
        res_j = 0
        is_palin = {}
        for j in range(n):
            is_palin[(j, j)] = True
            for i in range(j):
                if i == j - 1:
                    palin = s[i] == s[j]
                else:
                    palin = s[i] == s[j] and is_palin[(i + 1, j - 1)]
                is_palin[(i, j)] = palin
                if palin:
                    curr_len = j - i + 1
                    if curr_len > max_len:
                        max_len = curr_len
                        res_i = i
                        res_j = j
        return s[res_i: res_j + 1]
