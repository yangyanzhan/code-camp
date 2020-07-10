// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/least-common-ancestor.html .

bool getPath(TreeNode *root, int val, vector<int> &res) {
    if (!root) {
        return false;
    }
    res.push_back(root->val);
    if (root->val == val) {
        return true;
    }
    bool found = getPath(root->left, val, res);
    if (found) {
        return true;
    }
    found = getPath(root->right, val, res);
    if (found) {
        return true;
    }
    res.pop_back();
    return false;
}

int Solution::lca(TreeNode* A, int val1, int val2) {
    vector<int> path1, path2;
    getPath(A, val1, path1);
    getPath(A, val2, path2);
    int m = path1.size(), n = path2.size(), mn = min(m, n), i;
    for (i = 0; i < mn; i++) {
        if (path1[i] != path2[i]) {
            break;
        }
    }
    i--;
    if (i >= 0) {
        return path1[i];
    }
    return -1;
}
