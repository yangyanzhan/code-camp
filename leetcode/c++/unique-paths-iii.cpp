// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/unique-paths-iii.html .

class Solution {
    int res = 0;
public:
    int uniquePathsIII(vector<vector<int>> &grid) {
        int x, y, empty = 0;
        int m = grid.size(), n = grid[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    x = i;
                    y = j;
                    grid[i][j] = -1;
                } else if (grid[i][j] == 0) {
                    empty++;
                }
            }
        }
        dfs(x, y, empty, grid);
        return res;
    }

    void dfs(int x, int y, int empty, vector<vector<int>> &grid) {
        for (auto dir: vector<vector<int>>{{0, -1}, {0, 1}, {-1, 0}, {1, 0}}) {
            int x1 = x + dir[0], y1 = y + dir[1];
            if (x1 < 0 || x1 >= grid.size() || y1 < 0 || y1 >= grid[0].size()) {
                continue;
            }
            if (grid[x1][y1] == 2 && empty == 0) {
                res++;
                return;
            }
            if (grid[x1][y1] == 0) {
                empty--;
                grid[x1][y1] = -1;
                dfs(x1, y1, empty, grid);
                grid[x1][y1] = 0;
                empty++;
            }
        }
    }
};

