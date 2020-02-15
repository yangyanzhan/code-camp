// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/4sum.html .

class Solution {
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target) {
        set<vector<int>> tuples;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i <= n - 4; i++) {
            int a = nums[i];
            for (int j = i + 1; j <= n - 3; j++) {
                int b = nums[j];
                int k = j + 1, l = n - 1;
                while (k < l) {
                    int c = nums[k], d = nums[l];
                    int sum = a + b + c + d;
                    if (sum == target) {
                        k++;
                        l--;
                        tuples.insert({a, b, c, d});
                    } else if (sum < target) {
                        k++;
                    } else {
                        l--;
                    }
                }
            }
        }
        vector<vector<int>> res(tuples.begin(), tuples.end());
        return res;
    }
};

