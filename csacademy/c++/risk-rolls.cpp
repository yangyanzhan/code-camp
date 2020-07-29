// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/risk-rolls.html .

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
    int n, m;
    cin >> n >> m;
    vector<int> nums1(n, 0), nums2(m, 0);
    for (int i = 0; i < n; i++) {
        cin >> nums1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> nums2[i];
    }
    sort(nums1.begin(), nums1.end());
    reverse(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    reverse(nums2.begin(), nums2.end());
    int r1 = 0, r2 = 0;
    for (int i = 0; i < min(n, m); i++) {
        if (nums1[i] > nums2[i]) {
            r1++;
        } else {
            r2++;
        }
    }
    cout << r1 << " " << r2;
    return 0;
}
