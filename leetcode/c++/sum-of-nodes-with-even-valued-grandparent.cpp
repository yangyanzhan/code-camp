// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/sum-of-nodes-with-even-valued-grandparent.html .

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
    int sumEvenGrandparent(TreeNode *root) {
        if (!root) {
            return 0;
        }
        auto left = root->left;
        auto right = root->right;
        int s1 = sumEvenGrandparent(left);
        int s2 = sumEvenGrandparent(right);
        int s = s1 + s2;
        if (root->val % 2 == 0) {
            if (left) {
                if (left->left) {
                    s += left->left->val;
                }
                if (left->right) {
                    s += left->right->val;
                }
            }
            if (right) {
                if (right->left) {
                    s += right->left->val;
                }
                if (right->right) {
                    s += right->right->val;
                }
            }
        }
        return s;
    }
};
