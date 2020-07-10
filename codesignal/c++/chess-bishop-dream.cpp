// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/chess-bishop-dream.html .

std::vector<int> chessBishopDream(std::vector<int> boardSize,
                                  std::vector<int> initPosition,
                                  std::vector<int> initDirection, int k) {
    using namespace std;
    int m = boardSize[0], n = boardSize[1];
    if (m == 1 && n == 1) {
        return {0, 0};
    }
    int x = initPosition[0], y = initPosition[1];
    int dx = initDirection[0], dy = initDirection[1];
    vector<vector<int>> cache;
    cache.push_back({x, y, dx, dy});
    while (k-- > 0) {
        int x1 = x + dx, y1 = y + dy;
        if (x1 < 0 || x1 >= m) {
            x1 = x;
            dx = -dx;
        }
        if (y1 < 0 || y1 >= n) {
            y1 = y;
            dy = -dy;
        }
        x = x1;
        y = y1;
        vector<int> state = {x, y, dx, dy};
        for (int i = 0; i < cache.size(); i++) {
            if (cache[i] == state) {
                int c = cache.size() - i;
                int r = (k + 1) % c;
                auto final_state = cache[i + (r + c - 1) % c];
                return {final_state[0], final_state[1]};
            }
        }
        cache.push_back(state);
    }
    return {x, y};
}
