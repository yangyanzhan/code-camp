// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/balanced-binary-tree.html .

int balanced(TreeNode *A) {
    if (!A) return 0;
    int h1 = balanced(A->left), h2 = balanced(A->right);
    if (h1 < 0 || h2 < 0 || abs(h1 - h2) > 1) {
        return -1;
    }
    return max(h1, h2) + 1;
}
int Solution::isBalanced(TreeNode* A) {
    return balanced(A) >= 0;
}
