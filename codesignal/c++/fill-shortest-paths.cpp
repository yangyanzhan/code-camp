// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/fill-shortest-paths.html .

std::vector<std::vector<char>> fillShortestPaths(std::vector<std::vector<char>> plan) {
    using namespace std;
    int m = plan.size(), n = plan[0].size();
    int x = -1, y = -1;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (plan[i][j] == 's') {
                x = j;
                y = i;
                break;
            }
        }
        if (x != -1) {
            break;
        }
    }
    vector<int> dists{x, y, m - 1 - y, n - 1 - x};
    int min_dist = *min_element(dists.begin(), dists.end());
    if (x == min_dist) {
        for (int len = 1; len <= min_dist; len++) {
            for (int i = -len; i <= len; i++) {
                plan[y + i][x - len] = '#';
            }
        }
    }
    if (y == min_dist) {
        for (int len = 1; len <= min_dist; len++) {
            for (int i = -len; i <= len; i++) {
                plan[y - len][x + i] = '#';
            }
        }
    }
    if (m - 1 - y == min_dist) {
        for (int len = 1; len <= min_dist; len++) {
            for (int i = -len; i <= len; i++) {
                plan[y + len][x + i] = '#';
            }
        }
    }
    if (n - 1 - x == min_dist) {
        for (int len = 1; len <= min_dist; len++) {
            for (int i = -len; i <= len; i++) {
                plan[y + i][x + len] = '#';
            }
        }
    }
    return plan;
}

