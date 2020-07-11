// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/combination-sum-ii.html .

set<string> keys;
string getKey(vector<int> row) {
    stringstream ss;
    for (int num : row) {
        ss << num << "-";
    }
    return ss.str();
}

void traverse(vector<int> used, vector<int> remains, int sum, int target,
              vector<vector<int>> &res) {
    if (remains.size() <= 0)
        return;
    int remain = remains[0];
    sum += remain;
    used.push_back(remain);
    remains.erase(remains.begin());
    if (sum < target) {
        traverse(used, remains, sum, target, res);
    } else if (sum == target) {
        string key = getKey(used);
        if (keys.find(key) == keys.end()) {
            keys.insert(key);
            res.push_back(used);
        }
    }
    sum -= remain;
    used.pop_back();
    traverse(used, remains, sum, target, res);
}

vector<vector<int>> Solution::combinationSum(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    vector<int> used, remains = A;
    int sum = 0, target = B;
    vector<vector<int>> res;
    traverse(used, remains, sum, target, res);
    return res;
}
