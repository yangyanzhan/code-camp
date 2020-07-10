// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/anti-diagonals.html .

vector<vector<int>> Solution::diagonal(vector<vector<int>> &A) {
    int n = A.size();
    vector<vector<int>> res;
    for (int k = 0; k < n; k++) {
        vector<int> row;
        for (int i = 0; i <= k; i++) {
            row.push_back(A[i][k - i]);
        }
        res.push_back(row);
    }
    for (int k = 1; k < n; k++) {
        vector<int> row;
        for (int i = k; i < n; i++) {
            row.push_back(A[i][n + k - 1 - i]);
        }
        res.push_back(row);
    }
    return res;
}
