// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/recover-binary-search-tree.html .

TreeNode *pre;
TreeNode *first;
TreeNode *second;

void inorder(TreeNode *root) {
    if (!root) {
        return ;
    }
    inorder(root->left);
    if (!pre) {
        pre = root;
    } else {
        int n1 = pre->val, n2 = root->val;
        if (n1 > n2) {
            if (!first) {
                first = pre;
            }
            second = root;
        }
        pre = root;
    }
    inorder(root->right);
}

vector<int> Solution::recoverTree(TreeNode *A) {
    pre = NULL, first = NULL, second = NULL;
    vector<int> res;
    inorder(A);
    if (first && second) {
        res.push_back(second->val);
        res.push_back(first->val);
    }
    return res;
}
