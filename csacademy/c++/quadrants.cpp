// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/quadrants.html .

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
    int n;
    cin >> n;
    int cache[4] = {0};
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (a == 0 || b == 0) {
            continue;
        }
        a = a > 0 ? 1 : -1;
        b = b > 0 ? 1 : -1;
        int c;
        if (a * b < 0) {
            c = a > 0 ? 0 : 1;
        } else {
            c = a > 0 ? 2 : 3;
        }
        cache[c] = 1;
    }
    int res = 0;
    for (int i = 0; i < 4; i++) {
        res += cache[i];
    }
    cout << res << endl;
    return 0;
}
