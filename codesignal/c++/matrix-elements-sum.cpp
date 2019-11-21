// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/matrix-elements-sum.html .

int matrixElementsSum(std::vector<std::vector<int>> matrix) {
    int cost = 0;
    for (int j = 0; j < matrix[0].size(); j++) {
        for (int i = 0; i < matrix.size(); i++) {
            if (matrix[i][j] == 0) {
                break;
            }
            cost += matrix[i][j];
        }
    }
    return cost;
}
