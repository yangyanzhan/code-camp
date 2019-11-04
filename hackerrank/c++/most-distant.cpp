// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

double dist(double x1, double y1, double x2, double y2) {
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

double solve(vector<vector<int>> coordinates) {
    int x1, x2, y1, y2;
    bool has_x = false, has_y = false;
    for (auto coordinate: coordinates) {
        int x = coordinate[0], y = coordinate[1];
        if (y == 0) {
            if (!has_x) {
                x1 = x;
                x2 = x;
            }
            has_x = true;
            x1 = min(x1, x);
            x2 = max(x2, x);
        }
        if (x == 0) {
            if (!has_y) {
                y1 = y;
                y2 = y;
            }
            has_y = true;
            y1 = min(y1, y);
            y2 = max(y2, y);
        }
    }
    double res = 0.0;
    if (has_x) {
        res = max(res, x2 + 0.0 - x1);
    }
    if (has_y) {
        res = max(res, y2 + 0.0 - y1);
    }
    if (has_x && has_y) {
        res = max(res, dist(x1, 0, 0, y1));
        res = max(res, dist(x1, 0, 0, y2));
        res = max(res, dist(x2, 0, 0, y1));
        res = max(res, dist(x2, 0, 0, y2));
    }
    return res;
}
