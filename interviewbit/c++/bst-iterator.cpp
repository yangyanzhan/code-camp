// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/bst-iterator.html .

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

stack<TreeNode *> cache;

BSTIterator::BSTIterator(TreeNode *root) {
    cache = stack<TreeNode *>();
    TreeNode *curr = root;
    while (curr) {
        cache.push(curr);
        curr = curr->left;
    }
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() { return !cache.empty(); }

/** @return the next smallest number */
int BSTIterator::next() {
    TreeNode *node = cache.top();
    cache.pop();
    int val = node->val;
    node = node->right;
    while (node) {
        cache.push(node);
        node = node->left;
    }
    return val;
}
