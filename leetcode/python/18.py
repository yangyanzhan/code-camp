#!/usr/bin/env python

__author__ = "yangyanzhan"
__email__ = "yangyanzhan@gmail.com"
__url__ = "https://github.com/yangyanzhan/code-camp"

class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        nums.sort()
        solutions = set()
        n = len(nums)
        for i in range(n - 3):
            num1 = nums[i]
            for j in range(i + 1, n - 2):
                num2 = nums[j]
                sum12 = num1 + num2
                start = j + 1
                end = n - 1
                while start < end:
                    num3 = nums[start]
                    num4 = nums[end]
                    sum = sum12 + num3 + num4
                    if sum == target:
                        solutions.add((num1, num2, num3, num4))
                        start += 1
                        end -= 1
                    elif sum < target:
                        start += 1
                    else:
                        end -= 1
        return list(solutions)
