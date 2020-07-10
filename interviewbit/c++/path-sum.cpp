// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/path-sum.html .

int Solution::hasPathSum(TreeNode *A, int B) {
    if (!A) {
        return false;
    }
    int num = A->val;
    B -= num;
    if (!A->left && !A->right) {
        return B == 0;
    }
    if (hasPathSum(A->left, B) || hasPathSum(A->right, B)) {
        return true;
    }
    return false;
}
