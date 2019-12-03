#!/usr/bin/env python

__author__ = "yangyanzhan"
__email__ = "yangyanzhan@gmail.com"
__url__ = "https://github.com/yangyanzhan/code-camp"
__blog__ = "https://yangyanzhan.github.io"
__youtube__ = "https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber"
__twitter__ = "https://twitter.com/YangYanzhan"

mapping = {}
class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        if n == 0:
            return []
        if n in mapping:
            return mapping[n]
        solutions = []
        for i in range(n):
            parts1 = self.generateParenthesis(i)
            parts2 = self.generateParenthesis(n - 1 - i)
            if len(parts1) == 0:
                parts1 = [""]
            if len(parts2) == 0:
                parts2 = [""]
            for part1 in parts1:
                for part2 in parts2:
                    solution = "(" + part1 + ")" + part2
                    solutions.append(solution)
        mapping[n] = solutions
        return solutions
