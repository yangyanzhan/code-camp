// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/subset.html .

vector<vector<int>> Solution::subsets(vector<int> &A) {
    sort(A.begin(), A.end());
    vector<vector<int>> res{vector<int>()};
    if (A.size() <= 0)
        return res;
    int head = A[0];
    A.erase(A.begin());
    vector<vector<int>> nextRes = subsets(A);
    for (vector<int> item : nextRes) {
        item.insert(item.begin(), head);
        res.push_back(item);
    }
    for (vector<int> item : nextRes) {
        if (item.size() > 0) {
            res.push_back(item);
        }
    }
    return res;
}
