// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/basics-04-rotate-matrix.html .

using namespace std;

std::vector<std::vector<int>>
rotateMatrixLeft(std::vector<std::vector<int>> matrix) {
    vector<vector<int>> res;
    int m = matrix.size();
    if (m <= 0) {
        return res;
    }
    int n = matrix[0].size();
    for (int i = 0; i < n; i++) {
        vector<int> row(m);
        for (int j = 0; j < m; j++) {
            row[j] = matrix[j][n - 1 - i];
        }
        res.push_back(row);
    }
    return res;
}
