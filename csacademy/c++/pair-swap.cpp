// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/pair-swap.html .

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
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    deque<int> qs;
    for (int i = 1; i <= min(k - 1, n - 1); i++) {
        auto num = nums[i];
        while (!qs.empty()) {
            if (nums[qs.back()] >= num) {
                qs.pop_back();
            } else {
                break;
            }
        }
        qs.push_back(i);
    }
    for (int i = 0; i < n; i++) {
        int last_idx = i + k;
        if (last_idx < n) {
            auto num = nums[last_idx];
            while (!qs.empty()) {
                if (nums[qs.back()] >= num) {
                    qs.pop_back();
                } else {
                    break;
                }
            }
            qs.push_back(last_idx);
        }
        if (!qs.empty()) {
            if (nums[i] > nums[qs.front()]) {
                swap(nums[i], nums[qs.front()]);
                break;
            }
            if (qs.front() == i + 1) {
                qs.pop_front();
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
