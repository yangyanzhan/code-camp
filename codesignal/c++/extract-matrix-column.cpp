// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/extract-matrix-column.html .

std::vector<int> extractMatrixColumn(std::vector<std::vector<int>> matrix, int column) {
    using namespace std;
    vector<int> res;
    for (int i = 0; i < matrix.size(); i++) {
        res.push_back(matrix[i][column]);
    }
    return res;
}

