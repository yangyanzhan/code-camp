// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/leetcode/two-sum.html .

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<tuple<int, int>> pairs;
        for (int i = 0; i < nums.size(); i++) {
            pairs.push_back(make_tuple(nums[i], i));
        }
        sort(pairs.begin(), pairs.end());
        for (int i = 0, j = pairs.size() - 1; i < j; ) {
            int a = get<0>(pairs[i]), b = get<0>(pairs[j]);
            if (a + b == target) {
                vector<int> res{get<1>(pairs[i]), get<1>(pairs[j])};
                sort(res.begin(), res.end());
                return res;
            } else if (a + b > target) {
                j--;
            } else {
                i++;
            }
        }
        return {};
    }
};
