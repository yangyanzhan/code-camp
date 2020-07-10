// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/matrix-search.html .

class Position {
  public:
    int x;
    int y;
    Position(int x, int y) : x(x), y(y) {}
    bool operator<(const Position &pos) const {
        if (x < pos.x)
            return true;
        if (x == pos.x) {
            if (y < pos.y)
                return true;
        }
        return false;
    }
    bool operator==(const Position &pos) const {
        return x == pos.x && y == pos.y;
    }
    bool operator<=(const Position &pos) const {
        return *this < pos || *this == pos;
    }
};

int Solution::searchMatrix(vector<vector<int>> &A, int B) {
    int m = A.size(), n = A[0].size();
    Position begin(0, 0), end(m - 1, n - 1);
    while (begin <= end) {
        int x1 = begin.x, x2 = end.x, y1 = begin.y, y2 = end.y;
        int k = ((x2 - x1) * n + y2 - y1) / 2 + x1 * n + y1;
        int x = k / n, y = k % n;
        // cout << x1 << " " << y1 << " - " << x << " " << y << " - " << x2 << " " << y2 << endl;
        if (A[x][y] == B)
            return 1;
        if (A[x][y] < B) {
            y++;
            if (y >= n) {
                y = 0;
                x++;
            }
            begin = Position(x, y);
        } else {
            y--;
            if (y < 0) {
                y = n - 1;
                x--;
            }
            end = Position(x, y);
        }
    }
    return 0;
}
