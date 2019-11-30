// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/parking-spot.html .

bool parkingSpotFromLeft(std::vector<int> &carDimensions, std::vector<std::vector<int>> &parkingLot, std::vector<int> &luckySpot) {
    using namespace std;
    int len = carDimensions[0], width = carDimensions[1];
    int x1 = luckySpot[0], y1 = luckySpot[1], x2 = luckySpot[2], y2 = luckySpot[3];
    if ((x2 - x1 + 1 < width) || (y2 - y1 + 1 < len)) {
        return false;
    }
    int y3 = y1;
    for (int x3 = x1; x3 + width - 1 <= x2; x3++) {
        bool valid = true;
        for (int i = x3; i < x3 + width; i++) {
            for (int j = 0; j < y3 + len; j++) {
                if (parkingLot[i][j] != 0) {
                    valid = false;
                    break;
                }
            }
            if (!valid) {
                break;
            }
        }
        if (valid) {
            return true;
        }
    }
    return false;
}

std::vector<std::vector<int>> rotateMatrix(std::vector<std::vector<int>> &matrix) {
    using namespace std;
    int h = matrix.size(), w = matrix[0].size(), oh = w, ow = h;
    vector<vector<int>> rotated;
    for (int i = 0; i < oh; i++) {
        vector<int> row;
        for (int j = 0; j < ow; j++) {
            row.push_back(matrix[h - 1 - j][i]);
        }
        rotated.push_back(row);
    }
    return rotated;
}

std::vector<int> rotateRect(std::vector<int> &rect, int h, int w) {
    using namespace std;
    int x1 = rect[0], y1 = rect[1], x2 = rect[2], y2 = rect[3], oh = w, ow = h;
    int x3 = x2, y3 = y1, x4 = x1, y4 = y2;
    int x5 = y3;
    int y5 = h - 1 - x3;
    int x6 = y4;
    int y6 = h - 1 - x4;
    vector<int> rotated{x5, y5, x6, y6};
    return rotated;
}

bool parkingSpot(std::vector<int> carDimensions, std::vector<std::vector<int>> parkingLot, std::vector<int> luckySpot) {
    using namespace std;
    for (int i = 0; i < 4; i++) {
        if (parkingSpotFromLeft(carDimensions, parkingLot, luckySpot)) {
            return true;
        }
        int h = parkingLot.size(), w = parkingLot[0].size();
        parkingLot = rotateMatrix(parkingLot);
        luckySpot = rotateRect(luckySpot, h, w);
    }
    return false;
}

