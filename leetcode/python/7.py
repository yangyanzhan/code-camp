#!/usr/bin/env python

__author__ = "yangyanzhan"
__email__ = "yangyanzhan@gmail.com"
__url__ = "https://github.com/yangyanzhan/code-camp"
__blog__ = "https://yangyanzhan.github.io"

class Solution:
    def reverse(self, x: int) -> int:
        x = str(x)
        heading = ""
        if x.startswith("-"):
            heading = "-"
            x = x[1:]
        x = "".join(list(reversed(x)))
        num = float(heading + x)
        if num > 2147483647 or num < -2147483648:
            return 0
        return int(heading + x)
