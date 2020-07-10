// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/matrix-block-sum.html .

class Solution {
  public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>> &mat, int K) {
        vector<vector<int>> res;
        int m = mat.size(), n = mat[0].size(), ki = min(m, K), kj = min(n, K);
        for (int i = 0; i < m; i++) {
            vector<int> row;
            int sum = 0;
            for (int di = -ki; di <= ki; di++) {
                for (int dj = -kj; dj <= kj; dj++) {
                    int i1 = i + di;
                    int j1 = dj;
                    if (i1 >= 0 && i1 < m && j1 >= 0 && j1 < n) {
                        sum += mat[i1][j1];
                    }
                }
            }
            row.push_back(sum);
            for (int j = 1; j < n; j++) {
                int last_j = j - 1 - K;
                int last = 0;
                if (last_j >= 0) {
                    for (int di = -ki; di <= ki; di++) {
                        int i1 = i + di;
                        int j1 = last_j;
                        if (i1 >= 0 && i1 < m && j1 >= 0 && j1 < n) {
                            last += mat[i1][j1];
                        }
                    }
                }
                sum -= last;
                int next_j = j + K;
                if (next_j < m) {
                    for (int di = -ki; di <= ki; di++) {
                        int i1 = i + di;
                        int j1 = next_j;
                        if (i1 >= 0 && i1 < m && j1 >= 0 && j1 < n) {
                            sum += mat[i1][j1];
                        }
                    }
                }
                row.push_back(sum);
            }
            res.push_back(row);
        }
        return res;
    }
};
