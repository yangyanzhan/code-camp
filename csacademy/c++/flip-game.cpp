// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/flip-game.html .

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

void flip_row(vector<vector<int>> &nums, int i) {
    for (auto &num : nums[i]) {
        num = 1 - num;
    }
}

void flip_column(vector<vector<int>> &nums, int j) {
    for (auto &row : nums) {
        row[j] = 1 - row[j];
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> nums;
    for (int i = 0; i < n; i++) {
        vector<int> row(m);
        for (int j = 0; j < m; j++) {
            cin >> row[j];
        }
        nums.push_back(row);
    }
    for (int i = 0; i < n; i++) {
        if (nums[i][0] == 0) {
            flip_row(nums, i);
        }
    }
    for (int j = 1; j < m; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i][j];
        }
        if (2 * sum < n) {
            flip_column(nums, j);
        }
    }
    ll res = 0;
    for (int i = 0; i < n; i++) {
        ll num = 0;
        for (int j = 0; j < m; j++) {
            num *= 2;
            num += nums[i][j];
        }
        res += num;
    }
    cout << res << endl;
    return 0;
}
