// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/anagrams.html .

string toKey(string raw) {
    sort(raw.begin(), raw.end());
    return raw;
}

vector<vector<int>> Solution::anagrams(const vector<string> &A) {
    vector<vector<int>> res;
    map<string, int> mapping;
    int n = A.size();
    for (int i = 0; i < n; i++) {
        string key = toKey(A[i]);
        if (mapping.find(key) != mapping.end()) {
            int idx = mapping[key];
            res[idx].push_back(i + 1);
        } else {
            mapping[key] = res.size();
            res.push_back(vector<int>{i + 1});
        }
    }
    return res;
}
