// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/maximum-level-sum-of-a-binary-tree.html .

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
    int maxLevelSum(TreeNode *root) {
        int res = 1, maxi = root->val, level = 1;
        vector<TreeNode *> nodes{root};
        while (true) {
            level++;
            vector<TreeNode *> new_nodes;
            int sum = 0;
            for (auto ptr: nodes) {
                if (ptr->left) {
                    sum += ptr->left->val;
                    new_nodes.push_back(ptr->left);
                }
                if (ptr->right) {
                    sum += ptr->right->val;
                    new_nodes.push_back(ptr->right);
                }
            }
            if (new_nodes.size() == 0) {
                break;
            }
            if (sum > maxi) {
                maxi = sum;
                res = level;
            }
            nodes = new_nodes;
        }
        return res;
    }
};

