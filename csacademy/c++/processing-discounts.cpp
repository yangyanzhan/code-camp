// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/processing-discounts.html .

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
    ll n, x;
    cin >> n >> x;
    ll res = x;
    ll bill = x;
    ll cost = x;
    vector<vector<ll>> numss(n);
    for (ll i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        numss[i] = vector<ll>{a, b};
    }
    sort(numss.begin(), numss.end(),
         [](vector<ll> a, vector<ll> b) { return a[0] < b[0]; });
    for (ll i = 0; i < n; i++) {
        ll a = numss[i][0], b = numss[i][1];
        if (a <= bill) {
            cost -= b;
        } else {
            cost += a - bill;
            cost -= b;
            bill = a;
        }
        res = min(res, cost);
    }
    cout << res << endl;
    return 0;
}
