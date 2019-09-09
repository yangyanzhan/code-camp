#!/usr/bin/env python

__author__ = "yangyanzhan"
__email__ = "yangyanzhan@gmail.com"
__url__ = "https://github.com/yangyanzhan/code-camp"

class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        l_tokens = "([{"
        r_tokens = ")]}"
        for ch in s:
            idx = l_tokens.find(ch)
            if idx >= 0:
                stack.append(idx)
            else:
                idx = r_tokens.find(ch)
                if len(stack) >= 1 and stack[-1] == idx:
                    del stack[-1]
                else:
                    return False
        return len(stack) == 0
