// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/permutations-ii.html .

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int> &nums) {
        set<vector<int>> perms;
        vector<vector<int>> items;
        for (int i = 0; i < nums.size(); i++) {
            items.push_back({i, nums[i]});
        }
        do {
            vector<int> perm;
            for (auto &item: items) {
                perm.push_back(item[1]);
            }
            perms.insert(perm);
        } while (next_permutation(items.begin(), items.end()));
        vector<vector<int>> res(perms.begin(), perms.end());
        return res;
    }
};

