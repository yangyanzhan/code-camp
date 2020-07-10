// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/spiral-order-matrix-ii.html .

vector<vector<int>> Solution::generateMatrix(int A) {
    int n = A, n2 = A * A;
    vector<vector<int>> res(n, vector<int>(n, 0));
    int i = 0, j = 0, incI = 0, incJ = 1;
    for (int k = 1; k <= n2; k++) {
        res[i][j] = k;
        if (k == n2) {
            break;
        }
        while (true) {
            int i1 = i + incI, j1 = j + incJ;
            if (0 <= i1 && i1 < n && 0 <= j1 && j1 < n) {
                if (res[i1][j1] == 0) {
                    break;
                }
            }
            if (incI == 0 && incJ == 1) {
                incI = 1, incJ = 0;
            } else if (incI == 1 && incJ == 0) {
                incI = 0, incJ = -1;
            } else if (incI == 0 && incJ == -1) {
                incI = -1, incJ = 0;
            } else if (incI == -1 && incJ == 0) {
                incI = 0, incJ = 1;
            }
        }
        i = i + incI;
        j = j + incJ;
    }
    return res;
}
