#!/usr/bin/env python

__author__ = "yangyanzhan"
__email__ = "yangyanzhan@gmail.com"
__url__ = "https://github.com/yangyanzhan/code-camp"
__blog__ = "https://yangyanzhan.github.io"
__youtube__ = "https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber"
__twitter__ = "https://twitter.com/YangYanzhan"

class Solution:
    def myAtoi(self, str: str) -> int:
        intMin = int(-pow(2, 31))
        intMax = int(pow(2, 31) - 1)
        n = len(str)
        sign = 1
        digitIdx = -1
        for i in range(n):
            ch = str[i]
            if ch == " ":
                continue
            if ch == "+":
                sign = 1
                digitIdx = i + 1
                break
            if ch == "-":
                sign = -1
                digitIdx = i + 1
                break
            digitIdx = i
            break
        if digitIdx < 0 or digitIdx > n:
            return 0
        res = 0.0
        for i in range(digitIdx, n):
            digit = ord(str[i]) - ord("0")
            if digit < 0 or digit > 9:
                break
            res *= 10
            res += sign * digit
            if res >= intMax:
                return intMax
            if res <= intMin:
                return intMin
        return int(res)
