// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/deepest-leaves-sum.html .

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
    int deepestLeavesSum(TreeNode* root) {
        int res = root->val, sum = 0;
        vector<TreeNode *> nodes1{root};
        vector<TreeNode *> nodes2;
        while (true) {
            sum = 0;
            nodes2 = vector<TreeNode *>();
            for (auto node: nodes1) {
                if (node->left) {
                    sum += node->left->val;
                    nodes2.push_back(node->left);
                }
                if (node->right) {
                    sum += node->right->val;
                    nodes2.push_back(node->right);
                }
            }
            if (!nodes2.empty()) {
                res = sum;
                nodes1 = nodes2;
            } else {
                break;
            }
        }
        return res;
    }
};

