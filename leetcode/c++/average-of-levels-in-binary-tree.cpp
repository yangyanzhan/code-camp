// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/average-of-levels-in-binary-tree.html .

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        return avg({root});
    }

    vector<double> avg(vector<TreeNode*> nodes) {
        if (nodes.empty()) {
            return {};
        }
        vector<TreeNode*> new_nodes;
        double sum = 0;
        for (auto &node: nodes) {
            sum += node->val;
            if (node->left) {
                new_nodes.push_back(node->left);
            }
            if (node->right) {
                new_nodes.push_back(node->right);
            }
        }
        vector<double> res;
        res.push_back(sum / nodes.size());
        auto new_res = avg(new_nodes);
        res.insert(res.end(), new_res.begin(), new_res.end());
        return res;
    }
};

