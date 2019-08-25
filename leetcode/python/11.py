#!/usr/bin/env python

__author__ = "yangyanzhan"
__email__ = "yangyanzhan@gmail.com"
__url__ = "https://github.com/yangyanzhan/code-camp"

class Solution:
    def maxArea(self, height: List[int]) -> int:
        start = 0
        end = len(height) - 1
        res = 0
        while start < end:
            area = (end - start) * min(height[start], height[end])
            res = max(res, area)
            if height[start] > height[end]:
                end -= 1
            else:
                start += 1
        return res
        
