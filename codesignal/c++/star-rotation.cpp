// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/star-rotation.html .

std::vector<std::vector<int>> getRowIndex1(std::vector<std::vector<int>> matrix,
                                           int width, std::vector<int> center) {
    using namespace std;
    int w = width / 2;
    vector<vector<int>> res(width);
    int x = center[0] - w, y = center[1];
    for (int i = 0; i < width; i++) {
        res[i] = vector<int>{x + i, y};
    }
    return res;
}

std::vector<std::vector<int>> getRowIndex2(std::vector<std::vector<int>> matrix,
                                           int width, std::vector<int> center) {
    using namespace std;
    int w = width / 2;
    vector<vector<int>> res(width);
    int x = center[0] - w, y = center[1] + w;
    for (int i = 0; i < width; i++) {
        res[i] = vector<int>{x + i, y - i};
    }
    return res;
}

std::vector<std::vector<int>> getRowIndex3(std::vector<std::vector<int>> matrix,
                                           int width, std::vector<int> center) {
    using namespace std;
    int w = width / 2;
    vector<vector<int>> res(width);
    int x = center[0], y = center[1] + w;
    for (int i = 0; i < width; i++) {
        res[i] = vector<int>{x, y - i};
    }
    return res;
}

std::vector<std::vector<int>> getRowIndex4(std::vector<std::vector<int>> matrix,
                                           int width, std::vector<int> center) {
    using namespace std;
    int w = width / 2;
    vector<vector<int>> res(width);
    int x = center[0] + w, y = center[1] + w;
    for (int i = 0; i < width; i++) {
        res[i] = vector<int>{x - i, y - i};
    }
    return res;
}

std::vector<std::vector<int>> rotate(std::vector<std::vector<int>> matrix,
                                     int width, std::vector<int> center) {
    using namespace std;
    vector<vector<vector<int>>> rowIndexs(4);
    rowIndexs[0] = getRowIndex1(matrix, width, center);
    rowIndexs[1] = getRowIndex2(matrix, width, center);
    rowIndexs[2] = getRowIndex3(matrix, width, center);
    rowIndexs[3] = getRowIndex4(matrix, width, center);
    vector<vector<int>> rows(4);
    for (int k = 0; k < 4; k++) {
        vector<vector<int>> rowIndex = rowIndexs[k];
        vector<int> row(width);
        for (int i = 0; i < width; i++) {
            row[i] = matrix[rowIndex[i][0]][rowIndex[i][1]];
        }
        rows[k] = row;
    }
    for (int k = 0; k < 1; k++) {
        vector<vector<int>> rowIndex = rowIndexs[k];
        vector<int> row = rows[4 - 1 - k];
        for (int i = 0; i < width; i++) {
            matrix[rowIndex[width - 1 - i][0]][rowIndex[width - 1 - i][1]] =
                row[i];
        }
    }
    for (int k = 1; k < 4; k++) {
        vector<vector<int>> rowIndex = rowIndexs[k];
        vector<int> row = rows[k - 1];
        for (int i = 0; i < width; i++) {
            matrix[rowIndex[i][0]][rowIndex[i][1]] = row[i];
        }
    }
    return matrix;
}

std::vector<std::vector<int>> starRotation(std::vector<std::vector<int>> matrix,
                                           int width, std::vector<int> center,
                                           int t) {
    using namespace std;
    t = t % 8;
    for (int i = 0; i < t; i++) {
        matrix = rotate(matrix, width, center);
    }
    return matrix;
}
