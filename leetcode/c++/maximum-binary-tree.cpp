// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/maximum-binary-tree.html .

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
    TreeNode *constructMaximumBinaryTree(vector<int> &nums) {
        return constructMaximumBinaryTree(nums, 0, nums.size() - 1);
    }
    TreeNode *constructMaximumBinaryTree(vector<int> &nums, int start,
                                         int end) {
        if (start > end) {
            return nullptr;
        }
        int idx = start, peak = nums[start];
        for (int i = start + 1; i <= end; i++) {
            if (nums[i] > peak) {
                peak = nums[i];
                idx = i;
            }
        }
        auto root = new TreeNode(peak);
        auto left = constructMaximumBinaryTree(nums, start, idx - 1);
        auto right = constructMaximumBinaryTree(nums, idx + 1, end);
        root->left = left;
        root->right = right;
        return root;
    }
};
