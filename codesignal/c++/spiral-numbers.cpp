// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/spiral-numbers.html .

std::vector<std::vector<int>> spiralNumbers(int n) {
    using namespace std;
    vector<vector<int>> matrix;
    for (int i = 0; i < n; i++) {
        matrix.push_back(vector<int>(n, 0));
    }
    int num = 0;
    for (int c = 1; c <= n / 2; c++) {
        int x, y;
        x = c - 1;
        y = c - 1;
        int i, j;
        i = x;
        for (j = y; j < n - c; j++) {
            num++;
            matrix[i][j] = num;
        }
        x = c - 1;
        y = n - c;
        j = y;
        for (i = x; i < n - c; i++) {
            num++;
            matrix[i][j] = num;
        }
        x = n - c;
        y = n - c;
        i = x;
        for (j = y; j > c - 1; j--) {
            num++;
            matrix[i][j] = num;
        }
        x = n - c;
        y = c - 1;
        j = y;
        for (i = x; i > c - 1; i--) {
            num++;
            matrix[i][j] = num;
        }
    }
    if (n % 2 != 0) {
        int half = n / 2 + 1;
        num++;
        matrix[half - 1][half - 1] = num;
    }
    return matrix;
}

