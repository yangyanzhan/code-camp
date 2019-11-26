// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/different-squares.html .

int differentSquares(std::vector<std::vector<int>> matrix) {
    using namespace std;
    set<string> cache;
    for (int i = 0; i < matrix.size() - 1; i++) {
        for (int j = 0; j < matrix[i].size() - 1; j++) {
            string token = to_string(matrix[i][j]) + "-" +
                to_string(matrix[i][j + 1]) + "-" +
                to_string(matrix[i + 1][j]) + "-" +
                to_string(matrix[i + 1][j + 1]);
            cache.insert(token);
        }
    }
    return cache.size();
}

