// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/rectangle-partition.html .

#include <algorithm>
#include <bitset>
#include <chrono>
#include <cmath>
#include <cstdlib>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <thread>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
// #include <execution>
#include <exception>

using namespace std;

typedef long long ll;

int main() {
    int h, w, n, m;
    cin >> h >> w >> n >> m;
    vector<int> hs(n + 2, 0);
    for (int i = 1; i <= n; i++) {
        cin >> hs[i];
    }
    hs[n + 1] = h;
    sort(hs.begin(), hs.end());
    vector<int> ws(m + 2, 0);
    for (int i = 1; i <= m; i++) {
        cin >> ws[i];
    }
    ws[m + 1] = w;
    sort(ws.begin(), ws.end());
    map<int, int> dists_h;
    for (int i = 1; i <= n + 1; i++) {
        int dist = hs[i] - hs[i - 1];
        if (dists_h.find(dist) == dists_h.end()) {
            dists_h[dist] = 0;
        }
        dists_h[dist]++;
    }
    map<int, int> dists_w;
    for (int i = 1; i <= m + 1; i++) {
        int dist = ws[i] - ws[i - 1];
        if (dists_w.find(dist) == dists_w.end()) {
            dists_w[dist] = 0;
        }
        dists_w[dist]++;
    }
    ll res = 0;
    for (auto pair_h : dists_h) {
        auto dist_h = pair_h.first;
        ll cnt_h = pair_h.second;
        if (dists_w.find(dist_h) != dists_w.end()) {
            res += cnt_h * dists_w[dist_h];
        }
    }
    cout << res << endl;
    return 0;
}
