// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/construct-binary-tree-from-inorder-and-preorder.html .

TreeNode *build(vector<int> &preorder, int pBegin, int pEnd, vector<int> &inorder, int iBegin, int iEnd) {
    if (pBegin > pEnd) {
        return NULL;
    }
    int num = preorder[pBegin];
    int idx = find(inorder.begin() + iBegin, inorder.begin() + iEnd + 1, num) - inorder.begin();
    TreeNode *root = new TreeNode(num);
    int len1 = idx - iBegin, len2 = iEnd - idx;
    root->left = build(preorder, pBegin + 1, pBegin + len1, inorder, iBegin, iBegin + len1 - 1);
    root->right = build(preorder, pBegin + len1 + 1, pBegin + len1 + len2, inorder, idx + 1, idx + len2);
    return root;
}

TreeNode* Solution::buildTree(vector<int> &preorder, vector<int> &inorder) {
    return build(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
}
