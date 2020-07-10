// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/neighboring-cells.html .

std::vector<std::vector<int>>
neighboringCells(std::vector<std::vector<int>> matrix) {
    using namespace std;
    int m = matrix.size(), n = matrix[0].size();
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                int count = 4;
                if (m == 1 && n == 1) {
                    count = 0;
                }
                if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                    count = 3;
                    if (m == 1 || n == 1) {
                        count = 2;
                    }
                    if ((i == 0 || i == m - 1) && (j == 0 || j == n - 1)) {
                        count = 2;
                        if (m == 1 || n == 1) {
                            count = 1;
                        }
                    }
                }
                matrix[i][j] = count;
            }
        }
    }
    return matrix;
}
