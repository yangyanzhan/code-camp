// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/battleships-in-a-board.html .

class Solution {
public:
    int countBattleships(vector<vector<char>> &board) {
        int res = 0;
        int m = board.size(), n = board[0].size();
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] != 'X') {
                    continue;
                } else {
                    res++;
                    board[i][j] = 'O';
                    bool is_row = false;
                    for (int j1 = j + 1; j1 < n; j1++) {
                        if (board[i][j1] != 'X') {
                            break;
                        } else {
                            board[i][j1] = 'O';
                            is_row = true;
                        }
                    }
                    if (!is_row) {
                        for (int i1 = i + 1; i1 < m; i1++) {
                            if (board[i1][j] != 'X') {
                                break;
                            } else {
                                board[i1][j] = 'O';
                            }
                        }
                    }
                }
            }
        }
        return res;
    }
};

