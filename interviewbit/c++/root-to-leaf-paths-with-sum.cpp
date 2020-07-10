// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/root-to-leaf-paths-with-sum.html .

vector<vector<int>> Solution::pathSum(TreeNode *root, int sum) {
    if (!root) {
        return vector<vector<int>>();
    }
    int num = root->val;
    if (!root->left && !root->right) {
        if (num == sum) {
            return vector<vector<int>>{vector<int>{num}};
        }
    }
    vector<vector<int>> leftPaths = pathSum(root->left, sum - num);
    vector<vector<int>> rightPaths = pathSum(root->right, sum - num);
    vector<vector<int>> res;
    for (vector<int> path: leftPaths) {
        path.insert(path.begin(), num);
        res.push_back(path);
    }
    for (vector<int> path: rightPaths) {
        path.insert(path.begin(), num);
        res.push_back(path);
    }
    return res;
}
