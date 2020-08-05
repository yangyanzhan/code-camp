// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/dominant-point.html .

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
    vector<vector<int>> coords(n);
    int maxi_x = numeric_limits<int>::min();
    int cnt_x = 0;
    int idx_x = -1;
    int maxi_y = numeric_limits<int>::min();
    int cnt_y = 0;
    int idx_y = -1;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        coords[i] = vector<int>{x, y};
        if (x > maxi_x) {
            maxi_x = x;
            cnt_x = 1;
            idx_x = i;
        } else if (x == maxi_x) {
            cnt_x++;
        }
        if (y > maxi_y) {
            maxi_y = y;
            cnt_y = 1;
            idx_y = i;
        } else if (y == maxi_y) {
            cnt_y++;
        }
    }
    if (cnt_x == 1 && cnt_y == 1 && idx_x == idx_y) {
        cout << (idx_x + 1) << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
