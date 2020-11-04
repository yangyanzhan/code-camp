// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/median-of-two-sorted-arrays.html .

using namespace std;

#include <iostream>
#include <vector>

class Solution {
  public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        auto n1 = nums1.size(), n2 = nums2.size();
        return (findKth(nums1, 0, nums2, 0, (n1 + n2 + 1) / 2) +
                findKth(nums1, 0, nums2, 0, (n1 + n2 + 2) / 2)) /
               2;
    }

    double findKth(vector<int> &nums1, int start1, vector<int> &nums2,
                   int start2, int k) {
        if (start1 >= nums1.size())
            return nums2[start2 + k - 1];
        if (start2 >= nums2.size())
            return nums1[start1 + k - 1];
        if (k == 1)
            return min(nums1[start1], nums2[start2]);
        int n1 = (start1 + k / 2 - 1 < nums1.size())
                     ? nums1[start1 + k / 2 - 1]
                     : numeric_limits<int>::max();
        int n2 = (start2 + k / 2 - 1 < nums2.size())
                     ? nums2[start2 + k / 2 - 1]
                     : numeric_limits<int>::max();
        if (n1 <= n2)
            return findKth(nums1, start1 + k / 2, nums2, start2, k - k / 2);
        return findKth(nums1, start1, nums2, start2 + k / 2, k - k / 2);
    }
};

