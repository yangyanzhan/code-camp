// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/zigzag-level-order-traversal-bt.html .

void getRow(TreeNode *root, int height, bool ltr, vector<int> &row) {
    if (!root) {
        return ;
    }
    if (height == 1) {
        row.push_back(root->val);
        return ;
    }
    if (ltr) {
        getRow(root->left, height - 1, ltr, row);
        getRow(root->right, height - 1, ltr, row);
    } else {
        getRow(root->right, height - 1, ltr, row);
        getRow(root->left, height - 1, ltr, row);
    }
}

vector<vector<int>> Solution::zigzagLevelOrder(TreeNode *A) {
    vector<vector<int>> res;
    bool ltr = true;
    for (int h = 1;;h++) {
        vector<int> row;
        getRow(A, h, ltr, row);
        ltr = !ltr;
        if (row.size() <= 0) {
            break;
        }
        res.push_back(row);
    }
    return res;
}
