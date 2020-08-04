// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/even-subset.html .

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
    int n;
    cin >> n;
    ll res = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    ll mini = numeric_limits<ll>::max();
    ll maxi = numeric_limits<ll>::min();
    for (int i = 0; i < n; i++) {
        ll num;
        cin >> num;
        if (num >= 0) {
            cnt1++;
            mini = min(mini, num);
            res += num;
        } else {
            cnt2++;
            maxi = max(maxi, num);
        }
    }
    if (cnt1 % 2 == 1) {
        if (cnt2 > 0 && mini + maxi > 0) {
            res += maxi;
        } else {
            res -= mini;
        }
    }
    cout << res << endl;
    return 0;
}
