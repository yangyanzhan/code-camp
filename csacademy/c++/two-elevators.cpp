// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/two-elevators.html .

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
    int n, e1, e2;
    cin >> n >> e1 >> e2;
    vector<int> nums(2 * n);
    for (int i = 0; i < n; i++) {
        cin >> nums[2 * i] >> nums[2 * i + 1];
    }
    int r1 = 0, r2 = 0;
    for (int i = 0; i < n; i++) {
        int a = nums[2 * i], b = nums[2 * i + 1];
        if (e1 >= a && a >= b) {
            r1++;
        } else if (e2 <= a && a <= b) {
            r1++;
        }
        if (e1 <= a && a <= b) {
            r2++;
        } else if (e2 >= a && a >= b) {
            r2++;
        }
    }
    int res = max(r1, r2);
    cout << res << endl;
    return 0;
}
