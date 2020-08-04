// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/minmax-subarray.html .

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
    vector<ll> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    auto pair = minmax_element(nums.begin(), nums.end());
    ll mini = *pair.first;
    ll maxi = *pair.second;
    vector<bool> is_mini(n, false);
    vector<bool> is_maxi(n, false);
    for (int i = 0; i < n; i++) {
        if (nums[i] == mini) {
            is_mini[i] = true;
        }
        if (nums[i] == maxi) {
            is_maxi[i] = true;
        }
    }
    int start = 0, end = 0;
    int c1 = is_mini[0] ? 1 : 0, c2 = is_maxi[0] ? 1 : 0;
    int res = numeric_limits<int>::max();
    for (start = 0; start < n; start++) {
        while (c1 == 0 || c2 == 0) {
            end++;
            if (end >= n) {
                break;
            }
            if (is_mini[end]) {
                c1++;
            }
            if (is_maxi[end]) {
                c2++;
            }
        }
        if (end >= n) {
            break;
        }
        res = min(res, end - start + 1);
        if (is_mini[start]) {
            c1--;
        }
        if (is_maxi[start]) {
            c2--;
        }
    }
    cout << res << endl;
    return 0;
}
