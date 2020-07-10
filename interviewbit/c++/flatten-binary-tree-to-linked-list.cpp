// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/flatten-binary-tree-to-linked-list.html .

TreeNode *Solution::flatten(TreeNode *A) {
    stack<TreeNode *> nodes;
    TreeNode *curr = A;
    while (curr) {
        if (curr->right) {
            nodes.push(curr->right);
        }
        if (curr->left) {
            curr->right = curr->left;
            curr->left = NULL;
        } else if (!nodes.empty()) {
            TreeNode *right = nodes.top();
            nodes.pop();
            curr->right = right;
        }
        curr = curr->right;
    }
    return A;
}
