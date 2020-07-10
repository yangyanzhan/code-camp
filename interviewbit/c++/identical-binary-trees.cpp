// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/identical-binary-trees.html .

int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    if (A == NULL && B != NULL) {
        return false;
    }
    if (A != NULL && B == NULL) {
        return false;
    }
    if (A == NULL && B == NULL) {
        return true;
    }
    if (A->val != B->val) {
        return false;
    }
    return isSameTree(A->left, B->left) && isSameTree(A->right, B->right);
}
