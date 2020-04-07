// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/projection-area-of-3d-shapes.html .

class Solution {
public:
    int projectionArea(vector<vector<int>> &grid) {
        int res = 0;
        int m = grid.size();
        for (int i = 0; i < m; i++) {
            int height = 0;
            for (int j = 0; j < m; j++) {
                if (grid[i][j] > 0) {
                    height = max(height, grid[i][j]);
                    res++;
                }
            }
            res += height;
        }
        for (int j = 0; j < m; j++) {
            int height = 0;
            for (int i = 0; i < m; i++) {
                height = max(height, grid[i][j]);
            }
            res += height;
        }
        return res;
    }
};

