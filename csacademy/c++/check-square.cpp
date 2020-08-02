// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/check-square.html .

#include <algorithm>
#include <bitset>
#include <chrono>
#include <cmath>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

typedef long long ll;

bool equal(double a, double b) { return abs(a - b) <= 0.001; }

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        vector<int> xs(4), ys(4);
        for (int i = 0; i < 4; i++) {
            cin >> xs[i] >> ys[i];
        }
        vector<double> dists;
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 4; j++) {
                double dx = xs[i] - xs[j];
                double dy = ys[i] - ys[j];
                double dist = sqrt(dx * dx + dy * dy);
                dists.push_back(dist);
            }
        }
        sort(dists.begin(), dists.end());
        auto dist1 = dists[0];
        auto dist2 = dists[5];
        if (equal(dist1, dists[1]) && equal(dist1, dists[2]) &&
            equal(dist1, dists[3]) && equal(dist2, dists[4]) &&
            equal(dist1 * 1.41421, dist2)) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
