#!/usr/bin/env python

__author__ = "yangyanzhan"
__email__ = "yangyanzhan@gmail.com"
__url__ = "https://github.com/yangyanzhan/code-camp"
__blog__ = "https://yangyanzhan.github.io"

class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows == 1:
            return s
        items = []
        n = len(s)
        for lineNum in range(numRows):
            idx = lineNum
            step1 = numRows - 1 - lineNum
            step2 = lineNum
            if step1 == 0:
                step1 = step2
            if step2 == 0:
                step2 = step1
            count = 0
            while idx < n:
                items.append(s[idx])
                count += 1
                step = step1 if count % 2 == 1 else step2
                if step == 0:
                    break
                idx += 2 * step
        return "".join(items)
