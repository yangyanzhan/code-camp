// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree.html .

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
    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned,
                            TreeNode *target) {
        if (cloned == nullptr) {
            return nullptr;
        }
        if (cloned->val == target->val) {
            return cloned;
        }
        auto res = getTargetCopy(original, cloned->left, target);
        if (res != nullptr) {
            return res;
        }
        res = getTargetCopy(original, cloned->right, target);
        if (res != nullptr) {
            return res;
        }
        return nullptr;
    }
};
