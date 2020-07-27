// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/erase-value.html .

#include <iostream>
#include <map>

typedef long long ll;

using namespace std;

int main() {
    ll n;
    cin >> n;
    map<ll, ll> cache;
    for (ll i = 0; i < n; i++) {
        ll num;
        cin >> num;
        if (cache.find(num) == cache.end()) {
            cache[num] = 0;
        }
        cache[num]++;
    }
    ll sum = 0, maxi = 0;
    for (auto kv : cache) {
        ll prod = kv.first * kv.second;
        sum += prod;
        maxi = max(maxi, prod);
    }
    ll res = sum - maxi;
    cout << res;
    return 0;
}
