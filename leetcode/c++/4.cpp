class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        if (m > n) {
            return this->findMedianSortedArrays(nums2, nums1);
        }
        int start = 0, end = m;
        while (true) {
            int split1 = (start + end) / 2;
            int split2 = (m + n + 1) / 2 - split1;
            if (split1 > 0 && split2 < n) {
                if (nums1[split1 - 1] > nums2[split2]) {
                    end = split1 - 1;
                    continue;
                }
            }
            if (split2 > 0 && split1 < m) {
                if (nums2[split2 - 1] > nums1[split1]) {
                    start = split1 + 1;
                    continue;
                }
            }
            int a = split1 > 0 ? nums1[split1 - 1] : numeric_limits<int>::min();
            int b = split2 > 0 ? nums2[split2 - 1] : numeric_limits<int>::min();
            int c = split1 < m ? nums1[split1] : numeric_limits<int>::max();
            int d = split2 < n ? nums2[split2] : numeric_limits<int>::max();
            if ((m + n) % 2 == 1) {
                return max(a, b);
            } else {
                return (max(a, b) + min(c, d)) / 2.0;
            }
        }
    }
};
