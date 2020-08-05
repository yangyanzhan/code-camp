// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/falling-leaves.html .

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
    ios::sync_with_stdio(false);
    int t, c, n;
    cin >> t >> c >> n;
    map<int, int> cache;
    for (int i = 0; i < n; i++) {
        int x, y, s;
        cin >> x >> y >> s;
        double t1 = x / (c + 0.0);
        double t2 = y / (s + 0.0);
        double t3 = t2 - t1;
        if (t3 < 0) {
            continue;
        }
        int t = round(t3);
        if ((ll)(t * c + x) * s == (ll)y * c) {
            if (cache.find(t) == cache.end()) {
                cache[t] = 0;
            }
            cache[t]++;
        }
    }
    for (int i = 0; i < t; i++) {
        if (cache.find(i) != cache.end()) {
            cout << cache[i] << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
