// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/min-pairing.html .

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;
    vector<ll> nums;
    for (ll i = 0; i < n; i++) {
        ll num;
        cin >> num;
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end());
    ll res = 0;
    for (ll i = 0; i < n; i += 2) {
        res += nums[i + 1] - nums[i];
    }
    cout << res;
    return 0;
}
