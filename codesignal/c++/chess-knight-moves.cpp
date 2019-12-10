// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/chess-knight-moves.html .

int chessKnightMoves(std::string cell) {
    using namespace std;
    int x = cell[0] - 'a', y = cell[1] - '1';
    int res = 0;
    for (int dx: vector<int>{-2, -1, 1, 2}) {
        for (int ddy: vector<int>{-1, 1}) {
            int dy = (3 - abs(dx)) * ddy;
            int x1 = x + dx, y1 = y + dy;
            if (x1 < 0 || x1 >= 8 || y1 < 0 || y1 >= 8) {
            } else {
                res++;
            }
        }
    }
    return res;
}

