// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/combination-sum.html .

void traverse(vector<int> used, vector<int> remains, int sum, int target,
              vector<vector<int>> &res) {
    if (remains.size() <= 0)
        return;
    int remain = remains[0];
    remains.erase(remains.begin());
    while (sum < target) {
        traverse(used, remains, sum, target, res);
        used.push_back(remain);
        sum += remain;
    }
    if (sum == target) {
        res.push_back(used);
    }
}

vector<vector<int>> Solution::combinationSum(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    vector<int>::iterator it = unique(A.begin(), A.end());
    A.resize(it - A.begin());
    vector<int> used, remains = A;
    vector<vector<int>> res;
    int sum = 0, target = B;
    traverse(used, remains, sum, target, res);
    reverse(res.begin(), res.end());
    return res;
}
