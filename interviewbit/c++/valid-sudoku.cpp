// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/valid-sudoku.html .

bool isValid(const vector<string> &A, vector<vector<int>> &indexes) {
    set<int> nums;
    for (vector<int> index : indexes) {
        int i = index[0], j = index[1];
        char ch = A[i][j];
        if (isdigit(ch)) {
            int num = ch - '0';
            if (nums.find(num) == nums.end()) {
                nums.insert(num);
            } else {
                return false;
            }
        }
    }
    return true;
}

int Solution::isValidSudoku(const vector<string> &A) {
    vector<vector<int>> indexes(9);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            indexes[j] = vector<int>{i, j};
        }
        if (!isValid(A, indexes)) {
            return false;
        }
    }
    for (int j = 0; j < 9; j++) {
        for (int i = 0; i < 9; i++) {
            indexes[i] = vector<int>{i, j};
        }
        if (!isValid(A, indexes)) {
            return false;
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k1 = 0; k1 < 3; k1++) {
                for (int k2 = 0; k2 < 3; k2++) {
                    indexes[k1 * 3 + k2] = vector<int>{3 * i + k1, 3 * j + k2};
                }
            }
            if (!isValid(A, indexes)) {
                return false;
            }
        }
    }
    return true;
}
