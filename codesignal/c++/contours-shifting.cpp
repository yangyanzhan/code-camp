// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/contours-shifting.html .

std::vector<std::vector<int>>
contoursShifting(std::vector<std::vector<int>> matrix) {
    using namespace std;
    vector<vector<int>> c_dirs;
    c_dirs.push_back({0, 1});
    c_dirs.push_back({1, 0});
    c_dirs.push_back({0, -1});
    c_dirs.push_back({-1, 0});
    vector<vector<int>> cc_dirs;
    cc_dirs.push_back({1, 0});
    cc_dirs.push_back({0, 1});
    cc_dirs.push_back({-1, 0});
    cc_dirs.push_back({0, -1});
    int m = matrix.size(), n = matrix[0].size();
    for (int c = 0; c < max(m, n); c++) {
        int sx = c, sy = c, s = matrix[sx][sy];
        int cm = m - 2 * c, cn = n - 2 * c;
        if (cm == 0 || cn == 0) {
            break;
        }
        if (cm == 1 && cn == 1) {
            break;
        }
        if (cm == 1) {
            if (c % 2 == 0) {
                for (int j = cn - 1; j > 0; j--) {
                    swap(matrix[sx][sy + j], matrix[sx][sy + j - 1]);
                }
            } else {
                for (int j = 0; j < cn - 1; j++) {
                    swap(matrix[sx][sy + j], matrix[sx][sy + j + 1]);
                }
            }
            break;
        }
        if (cn == 1) {
            if (c % 2 == 0) {
                for (int i = cm - 1; i > 0; i--) {
                    swap(matrix[sx + i][sy], matrix[sx + i - 1][sy]);
                }
            } else {
                for (int i = 0; i < cm - 1; i++) {
                    swap(matrix[sx + i][sy], matrix[sx + i + 1][sy]);
                }
            }
            break;
        }
        if (c % 2 == 0) {
            int x = sx, y = sy, tmp = matrix[x][y];
            for (auto dir : c_dirs) {
                while (true) {
                    int dx = dir[0], dy = dir[1];
                    int x1 = x + dx, y1 = y + dy;
                    if (x1 < sx || x1 >= sx + cm || y1 < sy || y1 >= sy + cn) {
                        break;
                    }
                    swap(tmp, matrix[x1][y1]);
                    x = x1;
                    y = y1;
                }
            }
        } else {
            int x = sx, y = sy, tmp = matrix[x][y];
            for (auto dir : cc_dirs) {
                while (true) {
                    int dx = dir[0], dy = dir[1];
                    int x1 = x + dx, y1 = y + dy;
                    if (x1 < sx || x1 >= sx + cm || y1 < sy || y1 >= sy + cn) {
                        break;
                    }
                    swap(tmp, matrix[x1][y1]);
                    x = x1;
                    y = y1;
                }
            }
        }
    }
    return matrix;
}
