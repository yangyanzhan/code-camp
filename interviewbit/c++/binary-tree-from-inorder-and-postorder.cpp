// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/binary-tree-from-inorder-and-postorder.html .

TreeNode *build(vector<int> &inorder, vector<int> &postorder, int iBegin,
                int iEnd, int pBegin, int pEnd) {
    if (iBegin > iEnd) {
        return NULL;
    }
    int num = postorder[pEnd];
    TreeNode *root = new TreeNode(num);
    int idx = find(inorder.begin() + iBegin, inorder.begin() + iEnd + 1, num) -
              inorder.begin();
    int len1 = idx - iBegin, len2 = iEnd - idx;
    root->left = build(inorder, postorder, iBegin, iBegin + len1 - 1, pBegin,
                       pBegin + len1 - 1);
    root->right = build(inorder, postorder, idx + 1, idx + len2, pBegin + len1,
                        pBegin + len1 + len2 - 1);
    return root;
}

TreeNode *Solution::buildTree(vector<int> &inorder, vector<int> &postorder) {
    return build(inorder, postorder, 0, inorder.size() - 1, 0,
                 postorder.size() - 1);
}
