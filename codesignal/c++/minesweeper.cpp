// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/minesweeper.html .

std::vector<std::vector<int>>
minesweeper(std::vector<std::vector<bool>> matrix) {
    using namespace std;
    vector<vector<int>> res;
    int m = matrix.size(), n = matrix[0].size();
    for (int i = 0; i < m; i++) {
        vector<int> row;
        for (int j = 0; j < n; j++) {
            int count = 0;
            for (int i1 = -1; i1 <= 1; i1++) {
                for (int j1 = -1; j1 <= 1; j1++) {
                    int i2 = i + i1, j2 = j + j1;
                    if (i2 == i && j2 == j) {
                        continue;
                    }
                    if (0 <= i2 && i2 < m && 0 <= j2 && j2 < n) {
                        count += matrix[i2][j2] ? 1 : 0;
                    }
                }
            }
            row.push_back(count);
        }
        res.push_back(row);
    }
    return res;
}
