#!/usr/bin/env python

__author__ = "yangyanzhan"
__email__ = "yangyanzhan@gmail.com"
__url__ = "https://github.com/yangyanzhan/code-camp"
__blog__ = "https://yangyanzhan.github.io"

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        nums = [(nums[i], i) for i in range(len(nums))]
        nums.sort()
        start = 0
        end = len(nums) - 1
        v1 = nums[start][0]
        v2 = nums[end][0]
        while start < end:
            sum = v1 + v2
            if sum == target:
                return [nums[start][1], nums[end][1]]
            elif sum < target:
                start += 1
                v1 = nums[start][0]
            else:
                end -= 1
                v2 = nums[end][0]
        return None
