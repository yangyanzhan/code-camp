// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/symmetric-binary-tree.html .

bool isSame(TreeNode *A, TreeNode *B) {
    if (A && !B) {
        return false;
    }
    if (!A && B) {
        return false;
    }
    if (!A && !B) {
        return true;
    }
    if (A->val != B->val) {
        return false;
    }
    return isSame(A->left, B->right) && isSame(A->right, B->left);
}
int Solution::isSymmetric(TreeNode *A) {
    if (!A) {
        return true;
    }
    return isSame(A->left, A->right);
}
