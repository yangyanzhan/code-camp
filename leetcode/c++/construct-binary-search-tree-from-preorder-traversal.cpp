// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/construct-binary-search-tree-from-preorder-traversal.html .

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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if (preorder.size() == 0) {
            return nullptr;
        }
        int first = preorder[0];
        auto head = new TreeNode(first);
        vector<int> lefts;
        vector<int> rights;
        int i = 1;
        for (; i < preorder.size(); i++) {
            if (preorder[i] < first) {
                lefts.push_back(preorder[i]);
            } else {
                break;
            }
        }
        for (; i < preorder.size(); i++) {
            rights.push_back(preorder[i]);
        }
        head->left = bstFromPreorder(lefts);
        head->right = bstFromPreorder(rights);
        return head;
    }
};

