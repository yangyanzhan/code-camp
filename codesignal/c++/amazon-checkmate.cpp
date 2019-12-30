// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/amazon-checkmate.html .

bool can_place1(int x, int y, int kx, int ky, int ax, int ay) {
    if (!(0 <= x && x < 8 && 0 <= y && y < 8)) {
        return false;
    }
    if (x == ax && y == ay) {
        return false;
    }
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (x == kx + i && y == ky + j) {
                return false;
            }
        }
    }
    return true;
}

bool can_place2(int x, int y, int kx, int ky) {
    if (!(0 <= x && x < 8 && 0 <= y && y < 8)) {
        return false;
    }
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (x == kx + i && y == ky + j) {
                return false;
            }
        }
    }
    return true;
}

bool is_attacked(int x, int y, int kx, int ky, int ax, int ay) {
    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            for (int step = 1; step <= 8; step++) {
                int tx = dx * step + ax;
                int ty = dy * step + ay;
                if (!(0 <= tx && tx < 8 && 0 <= ty && ty < 8)) {
                    break;
                }
                if (tx == kx && ty == ky) {
                    break;
                }
                if (tx == x && ty == y) {
                    return true;
                }
            }
        }
    }
    for (auto dx: vector<int>{-2, -1, 1, 2}) {
        int dyabs = 3 - abs(dx);
        for (auto dy: vector<int>{-dyabs, dyabs}) {
            int tx = dx + ax;
            int ty = dy + ay;
            if (tx == x && ty == y) {
                return true;
            }
        }
    }
    return false;
}

std::vector<int> amazonCheckmate(std::string king, std::string amazon) {
    using namespace std;
    int kx = king[0] - 'a', ky = king[1] - '1';
    int ax = amazon[0] - 'a', ay = amazon[1] - '1';
    int checkmate = 0, check = 0, stalemate = 0, safe = 0;
    for (int x = 0; x < 8; x++) {
        for (int y = 0; y < 8; y++) {
            if (!can_place1(x, y, kx, ky, ax, ay)) {
                continue;
            }
            if (is_attacked(x, y, kx, ky, ax, ay)) {
                bool found = false;
                for (int dx = -1; dx <= 1; dx++) {
                    for (int dy = -1; dy <= 1; dy++) {
                        if (dx == 0 && dy == 0) {
                            continue;
                        }
                        int tx = x + dx;
                        int ty = y + dy;
                        if (tx == ax && ty == ay && can_place2(tx, ty, kx, ky)) {
                            found = true;
                            break;
                        }
                        if (can_place1(tx, ty, kx, ky, ax, ay) && !is_attacked(tx, ty, kx, ky, ax, ay)) {
                            found = true;
                            break;
                        }
                    }
                    if (found) {
                        break;
                    }
                }
                if (found) {
                    check++;
                } else {
                    checkmate++;
                }
            } else {
                bool found = false;
                for (int dx = -1; dx <= 1; dx++) {
                    for (int dy = -1; dy <= 1; dy++) {
                        if (dx == 0 && dy == 0) {
                            continue;
                        }
                        int tx = x + dx;
                        int ty = y + dy;
                        if (tx == ax && ty == ay && can_place2(tx, ty, kx, ky)) {
                            found = true;
                            break;
                        }
                        if (can_place1(tx, ty, kx, ky, ax, ay) && !is_attacked(tx, ty, kx, ky, ax, ay)) {
                            found = true;
                            break;
                        }
                    }
                    if (found) {
                        break;
                    }
                }
                if (found) {
                    safe++;
                } else {
                    stalemate++;
                }
            }
        }
    }
    return {checkmate, check, stalemate, safe};
}

