// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/sum-root-to-leaf-numbers.html .

void getSum(TreeNode *A, long long sum, int &res) {
    if (A == NULL) {
        return ;
    }
    sum = sum * 10 + A->val;
    sum %= 1003;
    if (!A->left && !A->right) {
        res += sum;
        res %= 1003;
    }
    getSum(A->left, sum, res);
    getSum(A->right, sum, res);
}

int Solution::sumNumbers(TreeNode *A) {
    int res = 0;
    getSum(A, 0, res);
    return res;
}
