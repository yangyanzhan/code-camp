// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/merging-cities.html .

std::vector<std::vector<bool>>
mergingCities(std::vector<std::vector<bool>> roadRegister) {
    using namespace std;
    int n = roadRegister.size();
    vector<set<int>> points;
    for (int i = 1; i <= n / 2; i++) {
        int i1 = 2 * (i - 1), i2 = i1 + 1;
        if (roadRegister[i1][i2]) {
            points.push_back(set<int>{i1, i2});
        } else {
            points.push_back(set<int>{i1});
            points.push_back(set<int>{i2});
        }
    }
    if (n % 2 != 0) {
        points.push_back(set<int>{n - 1});
    }
    int m = points.size();
    vector<vector<bool>> res;
    for (int i = 0; i < m; i++) {
        vector<bool> row;
        for (int j = 0; j < m; j++) {
            bool connected = false;
            if (i == j) {
                connected = false;
            } else {
                for (auto n1 : points[i]) {
                    for (auto n2 : points[j]) {
                        if (roadRegister[n1][n2]) {
                            connected = true;
                            break;
                        }
                    }
                }
            }
            row.push_back(connected);
        }
        res.push_back(row);
    }
    return res;
}
