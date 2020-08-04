// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/online-gcd.html .

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

int gcd(int a, int b) {
    if (a < b) {
        swap(a, b);
    }
    if (a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}

int main() {
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int g = nums[0];
    for (int i = 1; i < n; i++) {
        g = gcd(g, nums[i]);
    }
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        nums[a - 1] /= b;
        int num = nums[a - 1];
        g = gcd(g, num);
        cout << g << endl;
    }
    return 0;
}
