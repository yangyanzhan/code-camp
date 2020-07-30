// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/divisor-clique.html .

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

int main() {
    int n;
    cin >> n;
    vector<ll> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    int res = 0;
    for (int i = n - 1; i >= 0; i--) {
        int cnt = 0;
        int pre = i;
        for (int j = i - 1; j >= 0; j--) {
            if (nums[pre] % nums[j] == 0) {
                cnt++;
                pre = j;
            }
        }
        res = max(res, cnt + 1);
    }
    cout << res;
    return 0;
}
