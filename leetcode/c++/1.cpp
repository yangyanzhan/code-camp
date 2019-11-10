// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<tuple<int, int>> items;
        for (int i = 0; i < nums.size(); i++) {
            items.push_back(make_tuple(nums[i], i));
        }
        sort(items.begin(), items.end());
        int start = 0;
        int end = nums.size() - 1;
        int num1 = get<0>(items[start]);
        int num2 = get<0>(items[end]);
        while (end > start) {
            int sum = num1 + num2;
            if (sum == target) {
                return vector<int>{get<1>(items[start]), get<1>(items[end])};
            } else if (sum > target) {
                end--;
                num2 = get<0>(items[end]);
            } else {
                start++;
                num1 = get<0>(items[start]);
            }
        }
        return vector<int>{};
    }
};
