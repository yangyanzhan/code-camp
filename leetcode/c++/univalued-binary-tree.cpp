// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/univalued-binary-tree.html .

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
    int dfs(TreeNode *root) {
        if (root->left != nullptr) {
            if (root->val != dfs(root->left)) {
                return -1;
            }
        }
        if (root->right != nullptr) {
            if (root->val != dfs(root->right)) {
                return -1;
            }
        }
        return root->val;
    }

  public:
    bool isUnivalTree(TreeNode *root) {
        if (root == nullptr) {
            return true;
        }
        return dfs(root) != -1;
    }
};
