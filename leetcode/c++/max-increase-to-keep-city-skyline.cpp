// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/max-increase-to-keep-city-skyline.html .

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<int> max_r;
        vector<int> max_c;
        for (int i = 0; i < m; i++) {
            int res = grid[i][0];
            for (int j = 1; j < n; j++) {
                res = max(res, grid[i][j]);
            }
            max_r.push_back(res);
        }
        for (int j = 0; j < n; j++) {
            int res = grid[0][j];
            for (int i = 1; i < m; i++) {
                res = max(res, grid[i][j]);
            }
            max_c.push_back(res);
        }
        int res = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                res += min(max_r[i], max_c[j]) - grid[i][j];
            }
        }
        return res;
    }
};

