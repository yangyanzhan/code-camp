// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/sudoku.html .

bool sudoku(std::vector<std::vector<int>> grid) {
    using namespace std;
    for (int i = 0; i < 9; i++) {
        set<int> cache;
        for (int j = 0; j < 9; j++) {
            cache.insert(grid[i][j]);
        }
        if (cache.size() != 9) {
            return false;
        }
    }
    for (int j = 0; j < 9; j++) {
        set<int> cache;
        for (int i = 0; i < 9; i++) {
            cache.insert(grid[i][j]);
        }
        if (cache.size() != 9) {
            return false;
        }
    }
    for (int i1 = 0; i1 < 3; i1++) {
        for (int j1 = 0; j1 < 3; j1++) {
            set<int> cache;
            for (int i2 = 0; i2 < 3; i2++) {
                for (int j2 = 0; j2 < 3; j2++) {
                    int i = i1 * 3 + i2;
                    int j = j1 * 3 + j2;
                    cache.insert(grid[i][j]);
                }
            }
            if (cache.size() != 9) {
                return false;
            }
        }
    }
    return true;
}
