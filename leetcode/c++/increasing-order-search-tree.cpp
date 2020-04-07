// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/increasing-order-search-tree.html .

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
    vector<TreeNode *> dfs(TreeNode *root) {
        vector<TreeNode *> res;
        if (root == nullptr) {
            return res;
        }
        auto lefts = dfs(root->left);
        auto rights = dfs(root->right);
        if (lefts.size() > 0) {
            lefts[lefts.size() - 1]->right = root;
            res.insert(res.end(), lefts.begin(), lefts.end());
        }
        res.push_back(root);
        if (rights.size() > 0) {
            root->right = rights[0];
            res.insert(res.end(), rights.begin(), rights.end());
        } else {
            root->right = nullptr;
        }
        root->left = nullptr;
        return res;
    }
public:
    TreeNode *increasingBST(TreeNode *root) {
        if (root == nullptr) {
            return nullptr;
        }
        return dfs(root)[0];
    }
};

