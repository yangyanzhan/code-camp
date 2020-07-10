// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/inorder-traversal-of-cartesian-tree.html .

TreeNode *build(vector<int> &nums, int begin, int end) {
    if (begin > end) {
        return NULL;
    }
    auto it = max_element(nums.begin() + begin, nums.begin() + end + 1);
    int middle = it - nums.begin();
    TreeNode *root = new TreeNode(*it);
    root->left = build(nums, begin, middle - 1);
    root->right = build(nums, middle + 1, end);
    return root;
}

TreeNode* Solution::buildTree(vector<int> &A) {
    return build(A, 0, A.size() - 1);
}
