// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/spiral-matrix-iii.html .

class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int R, int C, int r0, int c0) {
        vector<vector<int>> res;
        int i = r0, j = c0;
        int i_dir = 0, i_step = 0, step = 1;
        vector<vector<int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        while (true) {
            if (res.size() == R * C) {
                break;
            }
            if (0 <= i && i < R && 0 <= j && j < C) {
                res.push_back({i, j});
            }
            if (i_step == step) {
                if (i_dir == 1 || i_dir == 3) {
                    step += 1;
                }
                i_step = 0;
                i_dir++;
                i_dir %= 4;
            }
            i_step++;
            i += dirs[i_dir][0];
            j += dirs[i_dir][1];
        }
        return res;
    }
};

