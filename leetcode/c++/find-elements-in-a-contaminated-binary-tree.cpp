// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/find-elements-in-a-contaminated-binary-tree.html .

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class FindElements {
    TreeNode *root;
    void recover(TreeNode *root, int value) {
        if (root != nullptr) {
            root->val = value;
            recover(root->left, 2 * value + 1);
            recover(root->right, 2 * value + 2);
        }
    }
    bool find(int target, TreeNode *root) {
        if (root == nullptr) {
            return false;
        }
        if (root->val == target) {
            return true;
        }
        return find(target, root->left) || find(target, root->right);
    }
public:
    FindElements(TreeNode *root) {
        recover(root, 0);
        this->root = root;
    }

    bool find(int target) {
        return find(target, root);
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */

