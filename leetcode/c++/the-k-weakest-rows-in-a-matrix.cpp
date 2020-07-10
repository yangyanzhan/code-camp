// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/the-k-weakest-rows-in-a-matrix.html .

class Solution {
  public:
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> tuples;
        for (int i = 0; i < m; i++) {
            int c = 0;
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 0) {
                    break;
                }
                c++;
            }
            tuples.push_back({c, i});
        }
        sort(tuples.begin(), tuples.end());
        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(tuples[i][1]);
        }
        return res;
    }
};
