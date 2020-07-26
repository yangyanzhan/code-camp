// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/check-contained-matrix.html .

#include <iostream>

void check_is_contained(int **mat1, const int mat2[3][3], const int nrows,
                        const int ncols, int &row, int &col) {
    for (int i = 0; i < nrows; i++) {
        if (nrows - i < 3) {
            break;
        }
        for (int j = 0; j < ncols; j++) {
            if (ncols - j < 3) {
                break;
            }
            bool found = true;
            for (int i1 = 0; i1 < 3; i1++) {
                for (int j1 = 0; j1 < 3; j1++) {
                    if (mat1[i1 + i][j1 + j] != mat2[i1][j1]) {
                        found = false;
                        break;
                    }
                }
                if (!found) {
                    break;
                }
            }
            if (found) {
                row = i;
                col = j;
                return;
            }
        }
    }
    row = -1;
    col = -1;
    return;
}
