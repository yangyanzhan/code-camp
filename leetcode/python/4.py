#!/usr/bin/env python

__author__ = "yangyanzhan"
__email__ = "yangyanzhan@gmail.com"
__url__ = "https://github.com/yangyanzhan/code-camp"
__blog__ = "https://yangyanzhan.github.io"

class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        if len(nums1) > len(nums2):
            return self.findMedianSortedArrays(nums2, nums1)
        m = len(nums1)
        n = len(nums2)
        start = 0
        end = m
        while True:
            split1 = math.floor((start + end) / 2)
            split2 = math.ceil((m + n) / 2) - split1
            if split1 > 0:
                if split2 < n:
                    if nums1[split1 - 1] > nums2[split2]:
                        end = split1 - 1
                        continue
            if split2 > 0:
                if split1 < m:
                    if nums2[split2 - 1] > nums1[split1]:
                        start = split1 + 1
                        continue
            if (m + n) % 2 == 1:
                return max(nums1[split1 - 1] if split1 >= 1 else -float("inf"), nums2[split2 - 1] if split2 >= 1 else -float("inf"))
            else:
                return (max(nums1[split1 - 1] if split1 >= 1 else -float("inf"), nums2[split2 - 1] if split2 >= 1 else -float("inf")) + 
                    min(nums1[split1] if split1 < m else float("inf"), nums2[split2] if split2 < n else float("inf"))) / 2.0
