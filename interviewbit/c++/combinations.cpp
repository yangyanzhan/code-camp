// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/combinations.html .

void traverse(vector<int> used, vector<int> remains, int k,
              vector<vector<int>> &res) {
    if (used.size() == k) {
        res.push_back(used);
        return;
    }
    if (remains.size() <= 0) {
        return;
    }
    int remain = remains[0];
    remains.erase(remains.begin());
    used.push_back(remain);
    traverse(used, remains, k, res);
    used.pop_back();
    traverse(used, remains, k, res);
}

vector<vector<int>> Solution::combine(int n, int k) {
    vector<vector<int>> res;
    if (n < k || k <= 0)
        return res;
    vector<int> used, remains;
    for (int i = 1; i <= n; i++) {
        remains.push_back(i);
    }
    traverse(used, remains, k, res);
    return res;
}
