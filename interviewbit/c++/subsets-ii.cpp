// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/subsets-ii.html .

set<string> keys;
string getKey(vector<int> &nums) {
    stringstream ss;
    for (int num : nums) {
        ss << num << "-";
    }
    return ss.str();
}

void traverse(vector<int> used, vector<int> remains, vector<vector<int>> &res) {
    if (remains.size() <= 0)
        return;
    int remain = remains[0];
    remains.erase(remains.begin());
    used.push_back(remain);
    string key = getKey(used);
    if (keys.find(key) == keys.end()) {
        res.push_back(used);
        keys.insert(key);
    }
    traverse(used, remains, res);
    used.pop_back();
    traverse(used, remains, res);
}

vector<vector<int>> Solution::subsetsWithDup(vector<int> &A) {
    keys.clear();
    sort(A.begin(), A.end());
    vector<int> used, remains = A;
    vector<vector<int>> res = {vector<int>()};
    traverse(used, remains, res);
    return res;
}
