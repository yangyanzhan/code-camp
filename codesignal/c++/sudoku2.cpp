// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/sudoku2.html .

bool valid(std::vector<std::vector<char>> &grid) {
    using namespace std;
    for (int i = 0; i < 9; i++) {
        set<char> cache;
        for (int j = 0; j < 9; j++) {
            cache.insert(grid[i][j]);
        }
        if (cache.size() < 9) {
            return false;
        }
    }
    for (int j = 0; j < 9; j++) {
        set<char> cache;
        for (int i = 0; i < 9; i++) {
            cache.insert(grid[i][j]);
        }
        if (cache.size() < 9) {
            return false;
        }
    }
    for (int i1 = 0; i1 < 3; i1++) {
        for (int j1 = 0; j1 < 3; j1++) {
            set<char> cache;
            for (int i2 = 0; i2 < 3; i2++) {
                for (int j2 = 0; j2 < 3; j2++) {
                    int i = i1 * 3 + i2, j = j1 * 3 + j2;
                    cache.insert(grid[i][j]);
                }
            }
            if (cache.size() < 9) {
                return false;
            }
        }
    }
    return true;
}

bool valid_with_blanks(std::vector<std::vector<char>> &grid) {
    using namespace std;
    for (int i = 0; i < 9; i++) {
        vector<int> counts(10, 0);
        for (int j = 0; j < 9; j++) {
            char ch = grid[i][j];
            if (ch != '.') {
                int num = ch - '0';
                if (counts[num] > 0) {
                    return false;
                }
                counts[num]++;
            }
        }
    }
    for (int j = 0; j < 9; j++) {
        vector<int> counts(10, 0);
        for (int i = 0; i < 9; i++) {
            char ch = grid[i][j];
            if (ch != '.') {
                int num = ch - '0';
                if (counts[num] > 0) {
                    return false;
                }
                counts[num]++;
            }
        }
    }
    for (int i1 = 0; i1 < 3; i1++) {
        for (int j1 = 0; j1 < 3; j1++) {
            vector<int> counts(10, 0);
            for (int i2 = 0; i2 < 3; i2++) {
                for (int j2 = 0; j2 < 3; j2++) {
                    int i = i1 * 3 + i2, j = j1 * 3 + j2;
                    char ch = grid[i][j];
                    if (ch != '.') {
                        int num = ch - '0';
                        if (counts[num] > 0) {
                            return false;
                        }
                        counts[num]++;
                    }
                }
            }
        }
    }
    return true;
}

bool search(std::vector<std::vector<char>> &grid, int blanks) {
    using namespace std;
    if (blanks == 0) {
        return valid(grid);
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (grid[i][j] != '.') {
                continue;
            }
            set<int> nums;
            for (int j1 = 0; j1 < 9; j1++) {
                char ch = grid[i][j1];
                if (ch != '.') {
                    int num = ch - '0';
                    nums.insert(num);
                }
            }
            for (int i1 = 0; i1 < 9; i1++) {
                char ch = grid[i1][j];
                if (ch != '.') {
                    int num = ch - '0';
                    nums.insert(num);
                }
            }
            int i2 = i / 3, j2 = j / 3;
            for (int i3 = 0; i3 < 3; i3++) {
                for (int j3 = 0; j3 < 3; j3++) {
                    int i4 = i2 * 3 + i3, j4 = j2 * 3 + j3;
                    char ch = grid[i4][j4];
                    if (ch != '.') {
                        int num = ch - '0';
                        nums.insert(num);
                    }
                }
            }
            for (int k = 1; k <= 9; k++) {
                if (nums.find(k) == nums.end()) {
                    grid[i][j] = '0' + k;
                    blanks--;
                    if (search(grid, blanks)) {
                        return true;
                    }
                    blanks++;
                }
            }
            grid[i][j] = '.';
            return false;
        }
    }
}

bool sudoku2(std::vector<std::vector<char>> grid) {
    using namespace std;
    int blanks = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (grid[i][j] == '.') {
                blanks++;
            }
        }
    }
    if (!valid_with_blanks(grid)) {
        return false;
    }
    return true;
}

