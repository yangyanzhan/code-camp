#!/usr/bin/env python

__author__ = "yangyanzhan"
__email__ = "yangyanzhan@gmail.com"
__url__ = "https://github.com/yangyanzhan/code-camp"
__blog__ = "https://yangyanzhan.github.io"
__youtube__ = "https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber"
__twitter__ = "https://twitter.com/YangYanzhan"

class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        n = len(nums)
        solution = (nums[0] + nums[1] + nums[2]) - target
        if solution == 0:
            return target
        pre_num1 = nums[0] - 1
        for i in range(n - 2):
            num1 = nums[i]
            if num1 == pre_num1:
                continue
            pre_num1 = num1
            start = i + 1
            end = n - 1
            num2 = nums[start]
            num3 = nums[end]
            while start < end:
                diff = (num1 + num2 + num3) - target
                if abs(diff) < abs(solution):
                    solution = diff
                    if solution == 0:
                        return target
                move_start = False
                move_end = False
                if diff < 0:
                    move_start = True
                else:
                    move_end = True
                if move_start:
                    pre_num2 = num2
                    while start < end:
                        start += 1
                        num2 = nums[start]
                        if num2 != pre_num2:
                            break
                if move_end:
                    pre_num3 = num3
                    while start < end:
                        end -= 1
                        num3 = nums[end]
                        if num3 != pre_num3:
                            break
        return solution + target
