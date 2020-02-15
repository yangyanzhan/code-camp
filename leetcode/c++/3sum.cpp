// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/3sum.html .

class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        set<vector<int>> triples;
        sort(nums.begin(), nums.end());
        for (int i = 0; i <= (int)nums.size() - 3; i++) {
            int j = i + 1, k = nums.size() - 1;
            int a = nums[i];
            while (j < k) {
                int b = nums[j], c = nums[k];
                int sum = a + b + c;
                if (sum == 0) {
                    triples.insert({a, b, c});
                    j++;
                    k--;
                } else if (sum < 0) {
                    j++;
                } else {
                    k--;
                }
            }
        }
        vector<vector<int>> res(triples.begin(), triples.end());
        return res;
    }
};

