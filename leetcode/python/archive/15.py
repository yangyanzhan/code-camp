#!/usr/bin/env python

__author__ = "yangyanzhan"
__email__ = "yangyanzhan@gmail.com"
__url__ = "https://github.com/yangyanzhan/code-camp"
__blog__ = "https://yangyanzhan.github.io"
__youtube__ = "https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber"
__twitter__ = "https://twitter.com/YangYanzhan"

class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        solutions = []
        nums.sort()
        n = len(nums)
        preNum1 = None
        preNum2 = None
        preNum3 = None
        for i in range(n - 2):
            num1 = nums[i]
            if num1 == preNum1:
                continue
            preNum1 = num1
            start = i + 1
            end = n - 1
            while start < end:
                num2 = nums[start]
                num3 = nums[end]
                sum = num1 + num2 + num3
                moveStart = False
                moveEnd = False
                if sum == 0:
                    solutions.append([num1, num2, num3])
                    moveStart = True
                    moveEnd = True
                elif sum < 0:
                    moveStart = True
                else:
                    moveEnd = True
                if moveStart:
                    preNum2 = num2
                    while start < end:
                        start += 1
                        num2 = nums[start]
                        if preNum2 != num2:
                            break
                if moveEnd:
                    preNum3 = num3
                    while start < end:
                        end -= 1
                        num3 = nums[end]
                        if preNum3 != num3:
                            break
        return solutions
