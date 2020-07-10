// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/max-sum-path-in-binary-tree.html .

long long findBest(TreeNode *root, long long &best) {
    if (!root) {
        return INT_MIN;
    }
    long long left = findBest(root->left, best);
    long long right = findBest(root->right, best);
    long long res = max(max(left, right) + root->val, (long long)root->val);
    best = max(max(best, res), left + root->val + right);
    return res;
}

int Solution::maxPathSum(TreeNode *root) {
    long long best = INT_MIN;
    findBest(root, best);
    return best;
}
