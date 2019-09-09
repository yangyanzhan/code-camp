#!/usr/bin/env python

__author__ = "yangyanzhan"
__email__ = "yangyanzhan@gmail.com"
__url__ = "https://github.com/yangyanzhan/code-camp"

class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        mapping = {"1": [""], "2": ["a", "b", "c"], "3": ["d", "e", "f"], "4": ["g", "h", "i"], "5": ["j", "k", "l"], "6": ["m", "n", "o"], "7": ["p", "q", "r", "s"], "8": ["t", "u", "v"], "9": ["w", "x", "y", "z"], "0": [" "]}
        solutions = []
        if len(digits) == 0:
            return []
        sub_solutions = self.letterCombinations(digits[1:])
        if len(sub_solutions) == 0:
            sub_solutions = [""]
        for ch in mapping[digits[0]]:
            if ch == "":
                continue
            for sub_solution in sub_solutions:
                solutions.append(ch + sub_solution)
        return solutions
