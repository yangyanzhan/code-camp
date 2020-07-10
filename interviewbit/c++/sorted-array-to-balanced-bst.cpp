// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/sorted-array-to-balanced-bst.html .

TreeNode *toBST(const vector<int> &nums, int begin, int end) {
    if (begin > end) {
        return NULL;
    }
    int middle = (begin + end) / 2;
    TreeNode *root = new TreeNode(nums[middle]);
    TreeNode *left = toBST(nums, begin, middle - 1);
    TreeNode *right = toBST(nums, middle + 1, end);
    root->left = left;
    root->right = right;
    return root;
}

TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    return toBST(A, 0, A.size() - 1);
}
