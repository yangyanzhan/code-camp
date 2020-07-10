// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/balance-a-binary-search-tree.html .

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
  public:
    TreeNode *balanceBST(TreeNode *root) {
        vector<int> nums = flatten(root);
        sort(nums.begin(), nums.end());
        return construct(nums, 0, nums.size() - 1);
    }

    TreeNode *construct(vector<int> &nums, int start, int end) {
        if (start > end) {
            return nullptr;
        }
        int half = (start + end) / 2;
        auto head = new TreeNode(nums[half]);
        auto left = construct(nums, start, half - 1);
        auto right = construct(nums, half + 1, end);
        head->left = left;
        head->right = right;
        return head;
    }

    vector<int> flatten(TreeNode *root) {
        if (root == nullptr) {
            return vector<int>();
        }
        auto res = flatten(root->left);
        auto rights = flatten(root->right);
        res.push_back(root->val);
        res.insert(res.end(), rights.begin(), rights.end());
        return res;
    }
};
