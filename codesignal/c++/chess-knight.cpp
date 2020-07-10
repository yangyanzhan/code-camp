// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/chess-knight.html .

int moves(int x, int y) {
    using namespace std;
    int res = 0;
    vector<int> incs{-2, -1, 1, 2};
    for (auto inc_x : incs) {
        int inc_y_abs = 3 - abs(inc_x);
        for (auto inc_y : vector<int>{-inc_y_abs, inc_y_abs}) {
            int x1 = x + inc_x, y1 = y + inc_y;
            if (0 <= x1 && x1 < 8 && 0 <= y1 && y1 < 8) {
                res++;
            }
        }
    }
    return res;
}

int chessKnight(std::string cell) {
    return moves(cell[0] - 'a', cell[1] - '1');
}
