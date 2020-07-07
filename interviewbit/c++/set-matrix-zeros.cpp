// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/set-matrix-zeros.html .

void Solution::setZeroes(vector<vector<int>> &A) {
    int m = A.size(), n = A[0].size();
    set<int> zero_rows;
    set<int> zero_cols;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] == 0) {
                if (zero_cols.find(j) == zero_cols.end()) {
                    for (int i1 = 0; i1 < m; i1++) {
                        if (A[i1][j] == 1) {
                            A[i1][j] = -1;
                        }
                    }
                }
                if (zero_rows.find(i) == zero_rows.end()) {
                    for (int j1 = 0; j1 < n; j1++) {
                        if (A[i][j1] == 1) {
                            A[i][j1] = -1;
                        }
                    }
                }
                zero_cols.insert(j);
                zero_rows.insert(i);
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] == -1) {
                A[i][j] = 0;
            }
        }
    }
}
