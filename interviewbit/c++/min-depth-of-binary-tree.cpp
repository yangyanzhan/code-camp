// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/min-depth-of-binary-tree.html .

int Solution::minDepth(TreeNode* A) {
    if (!A) {
        return 0;
    }
    if (!A->left && !A->right) {
        return 1;
    }
    int h = INT_MAX;
    if (A->left) {
        h = min(h, minDepth(A->left) + 1);
    }
    if (A->right) {
        h = min(h, minDepth(A->right) + 1);
    }
    return h;
}
