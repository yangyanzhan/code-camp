// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/living-on-the-roads.html .

std::vector<std::vector<bool>> livingOnTheRoads(std::vector<std::vector<bool>> roadRegister) {
    using namespace std;
    int n = roadRegister.size();
    set<vector<int>> tmp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (roadRegister[i][j]) {
                tmp.insert({i, j});
            }
        }
    }
    vector<vector<int>> cache(tmp.begin(), tmp.end());
    int m = cache.size();
    vector<vector<bool>> res;
    for (int i = 0; i < m; i++) {
        vector<bool> row;
        for (int j = 0; j < m; j++) {
            bool connected = false;
            if (i == j) {
                connected = false;
            } else {
                set<int> pool;
                pool.insert(cache[i].begin(), cache[i].end());
                pool.insert(cache[j].begin(), cache[j].end());
                if (pool.size() < 4) {
                    connected = true;
                }
            }
            row.push_back(connected);
        }
        res.push_back(row);
    }
    return res;
}

