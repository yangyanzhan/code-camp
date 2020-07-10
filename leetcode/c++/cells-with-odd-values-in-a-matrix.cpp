// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/cells-with-odd-values-in-a-matrix.html .

class Solution {
  public:
    int oddCells(int n, int m, vector<vector<int>> &indices) {
        vector<vector<int>> cache(n);
        for (int i = 0; i < n; i++) {
            cache[i] = vector<int>(m, 0);
        }
        for (auto pair : indices) {
            int di = pair[0], dj = pair[1];
            for (int j = 0; j < m; j++) {
                cache[di][j]++;
            }
            for (int i = 0; i < n; i++) {
                cache[i][dj]++;
            }
        }
        int res = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (cache[i][j] % 2 != 0) {
                    res++;
                }
            }
        }
        return res;
    }
};
