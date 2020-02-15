// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/3sum-closest.html .

class Solution {
public:
    int threeSumClosest(vector<int> &nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int res = 0, min_gap = numeric_limits<int>::max();
        for (int i = 0; i <= n - 3; i++) {
            int a = nums[i];
            int j = i + 1, k = n - 1;
            while (j < k) {
                int b = nums[j], c = nums[k];
                int sum = a + b + c;
                int gap = sum - target;
                int abs_gap = abs(gap);
                if (abs_gap < min_gap) {
                    res = sum;
                    min_gap = abs_gap;
                }
                if (gap == 0) {
                    return res;
                } else if (gap > 0) {
                    k--;
                } else {
                    j++;
                }
            }
        }
        return res;
    }
};

