// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/permutations.html .

void traverse(vector<int> &used, vector<int> &remains,
              vector<vector<int>> &res) {
    if (remains.size() <= 0) {
        res.push_back(vector<int>(used));
        return;
    }
    for (int i = 0; i < remains.size(); i++) {
        int remain = remains[i];
        used.push_back(remain);
        remains.erase(remains.begin() + i);
        traverse(used, remains, res);
        used.pop_back();
        remains.insert(remains.begin() + i, remain);
    }
}

vector<vector<int>> Solution::permute(vector<int> &A) {
    vector<vector<int>> res;
    vector<int> used, remains;
    int n = A.size();
    for (int i = 0; i < n; i++) {
        remains.push_back(A[i]);
    }
    traverse(used, remains, res);
    return res;
}
