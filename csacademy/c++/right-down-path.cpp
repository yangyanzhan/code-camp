// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/right-down-path.html .

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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> nums;
    vector<vector<int>> cache1;
    vector<vector<int>> cache2;
    for (int i = 0; i < n; i++) {
        vector<int> row(m);
        for (int j = 0; j < m; j++) {
            cin >> row[j];
        }
        nums.push_back(row);
        cache1.push_back(vector<int>(m, 0));
        cache2.push_back(vector<int>(m, 0));
    }
    for (int i = 0; i < n; i++) {
        int c = 0;
        for (int j = 0; j < m; j++) {
            if (nums[i][j] == 1) {
                c++;
            } else {
                c = 0;
            }
            cache1[i][j] = c;
        }
    }
    for (int j = 0; j < m; j++) {
        int c = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i][j] == 1) {
                c++;
            } else {
                c = 0;
            }
            cache2[i][j] = c;
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int c1 = cache1[i][j];
            int c2 = cache2[i][j];
            if (c1 >= 2 && c2 >= 2) {
                res = max(res, c1 + c2 - 1);
            }
        }
    }
    cout << res << endl;
    return 0;
}
