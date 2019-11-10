#!/usr/bin/env python

__author__ = "yangyanzhan"
__email__ = "yangyanzhan@gmail.com"
__url__ = "https://github.com/yangyanzhan/code-camp"
__blog__ = "https://yangyanzhan.github.io"

class Solution:
    def romanToInt(self, s: str) -> int:
        bases = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
        romans = ["M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"]
        res = 0
        for i in range(len(bases)):
            base = bases[i]
            roman = romans[i]
            while s.startswith(roman):
                res += base
                s = s[len(roman):]
        return res
