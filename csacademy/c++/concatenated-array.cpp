// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/concatenated-array.html .

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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll l = 0, r = 0;
    ll i1, i2;
    for (ll i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            l++;
        } else {
            i1 = i;
            break;
        }
    }
    ll m = 0;
    if (l < n) {
        for (ll i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '0') {
                r++;
            } else {
                i2 = i;
                break;
            }
        }
        if (i1 < i2) {
            ll c = 0;
            for (ll i = i1 + 1; i <= i2; i++) {
                if (s[i] == '1') {
                    m = max(m, c);
                    c = 0;
                } else {
                    c++;
                }
            }
        }
    }
    ll res = 0;
    if (l == n) {
        res = l * k;
    } else {
        if (k == 1) {
            res = max(max(l, r), m);
        } else {
            res = max(l + r, m);
        }
    }
    cout << res << endl;
    return 0;
}
