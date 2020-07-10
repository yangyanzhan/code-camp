// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/score-after-flipping-matrix.html .

class Solution {
  public:
    int matrixScore(vector<vector<int>> &A) {
        int m = A.size(), n = A[0].size();
        for (int i = 0; i < m; i++) {
            if (A[i][0] == 0) {
                for (int j = 0; j < n; j++) {
                    A[i][j] = 1 - A[i][j];
                }
            }
        }
        int res = 0;
        int base = 1;
        for (int j = n - 1; j > 0; j--) {
            int count = 0;
            for (int i = 0; i < m; i++) {
                if (A[i][j] == 1) {
                    count++;
                }
            }
            count = max(count, m - count);
            res += count * base;
            base *= 2;
        }
        res += m * base;
        return res;
    }
};
