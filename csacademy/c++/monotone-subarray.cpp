// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/monotone-subarray.html .

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
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int pre = numeric_limits<int>::min();
    int res = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int num = nums[i];
        if (num >= pre) {
            cnt++;
        } else {
            cnt = 1;
        }
        pre = num;
        res = max(res, cnt);
    }
    reverse(nums.begin(), nums.end());
    cnt = 0;
    for (int i = 0; i < n; i++) {
        int num = nums[i];
        if (num >= pre) {
            cnt++;
        } else {
            cnt = 1;
        }
        pre = num;
        res = max(res, cnt);
    }
    cout << res;
    return 0;
}
