// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/rows-rearranging.html .

bool rowsRearranging(std::vector<std::vector<int>> matrix) {
    using namespace std;
    sort(matrix.begin(), matrix.end(),
         [](auto row1, auto row2) { return row1 < row2; });
    for (int j = 0; j < matrix[0].size(); j++) {
        for (int i = 1; i < matrix.size(); i++) {
            if (matrix[i][j] <= matrix[i - 1][j]) {
                return false;
            }
        }
    }
    return true;
}
