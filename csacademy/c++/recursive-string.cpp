// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/recursive-string.html .

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

map<ll, ll> cache = {{0, 1}, {1, 1}, {2, 1}};

ll walk(ll n) {
    if (n <= 2) {
        return 1;
    }
    if (cache.find(n) != cache.end()) {
        return cache[n];
    }
    ll n1 = n - 1, n2 = n - 2, n3 = n - 3;
    ll l1 = walk(n1);
    ll l2 = walk(n2);
    ll l3 = walk(n3);
    ll l = l1 + l2 + l3;
    cache[n] = l;
    return l;
}

string run(ll n, ll k) {
    if (n == 0) {
        return k == 1 ? "a" : "-1";
    } else if (n == 1) {
        return k == 1 ? "b" : "-1";
    } else if (n == 2) {
        return k == 1 ? "c" : "-1";
    }
    ll n1 = n - 1, n2 = n - 2, n3 = n - 3;
    ll l1 = cache[n1], l2 = cache[n2], l3 = cache[n3];
    if (k <= l1) {
        return run(n1, k);
    } else if (k <= l1 + l2) {
        return run(n2, k - l1);
    } else if (k <= l1 + l2 + l3) {
        return run(n3, k - l1 - l2);
    } else {
        return "-1";
    }
}

int main() {
    ios::sync_with_stdio(false);
    ll n, k;
    cin >> n >> k;
    walk(n);
    cout << run(n, k) << endl;
    return 0;
}
