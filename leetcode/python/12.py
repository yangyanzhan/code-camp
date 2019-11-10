#!/usr/bin/env python

__author__ = "yangyanzhan"
__email__ = "yangyanzhan@gmail.com"
__url__ = "https://github.com/yangyanzhan/code-camp"
__blog__ = "https://yangyanzhan.github.io"

class Solution:
    def intToRoman(self, num: int) -> str:
        bases = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
        romans = ["M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"]
        res = []
        for i in range(len(bases)):
            base = bases[i]
            roman = romans[i]
            count = num // base
            num -= count * base
            for j in range(count):
                res.append(roman)
        return "".join(res)
