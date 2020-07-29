// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/expected-dice.html .

#include <algorithm>
#include <bitset>
#include <chrono>
#include <cmath>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

typedef long long ll;

int main() {
    vector<int> nums1(6, 0), nums2(6, 0);
    for (int i = 0; i < 6; i++) {
        cin >> nums1[i];
    }
    for (int i = 0; i < 6; i++) {
        cin >> nums2[i];
    }
    map<int, int> cache;
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            int sum = nums1[i] + nums2[j];
            if (cache.find(sum) == cache.end()) {
                cache[sum] = 0;
            }
            cache[sum]++;
        }
    }
    int res = max_element(cache.begin(), cache.end(),
                          [](pair<int, int> p1, pair<int, int> p2) {
                              return p1.second < p2.second;
                          })
                  ->first;
    cout << res;
    return 0;
}
