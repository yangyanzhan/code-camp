// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/queens-that-can-attack-the-king.html .

class Solution {
  public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>> &queens,
                                            vector<int> &king) {
        vector<vector<int>> board(8, vector<int>(8, 0));
        vector<vector<int>> res;
        for (auto &queen : queens) {
            board[queen[0]][queen[1]] = 1;
        }
        int i = king[0], j = king[1];
        for (int di = -1; di <= 1; di++) {
            for (int dj = -1; dj <= 1; dj++) {
                if (di == 0 && dj == 0) {
                    continue;
                }
                for (int k = 1; k < 8; k++) {
                    int i1 = i + k * di, j1 = j + k * dj;
                    if (0 <= i1 && i1 < 8 && 0 <= j1 && j1 < 8) {
                        if (board[i1][j1] == 1) {
                            res.push_back({i1, j1});
                            break;
                        }
                    } else {
                        break;
                    }
                }
            }
        }
        return res;
    }
};
