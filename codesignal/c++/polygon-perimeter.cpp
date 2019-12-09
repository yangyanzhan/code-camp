// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/polygon-perimeter.html .

int polygonPerimeter(std::vector<std::vector<bool>> matrix) {
    using namespace std;
    int res = 0, m = matrix.size(), n = matrix[0].size();
    vector<vector<int>> dirs;
    dirs.push_back({1, 0});
    dirs.push_back({-1, 0});
    dirs.push_back({0, 1});
    dirs.push_back({0, -1});
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!matrix[i][j]) {
                continue;
            }
            for (auto dir: dirs) {
                int i1 = i + dir[0], j1 = j + dir[1];
                if (i1 < 0 || i1 >= m || j1 < 0 || j1 >= n) {
                    res++;
                } else if (!matrix[i1][j1]) {
                    res++;
                }
            }
        }
    }
    return res;
}

