// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/count-4-cycles.html .

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
    map<int, set<int>> mapping1, mapping2;
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        if (mapping1.find(a) == mapping1.end()) {
            mapping1[a] = set<int>();
        }
        mapping1[a].insert(b);
        swap(a, b);
        if (mapping1.find(a) == mapping1.end()) {
            mapping1[a] = set<int>();
        }
        mapping1[a].insert(b);
    }
    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        if (mapping2.find(a) == mapping2.end()) {
            mapping2[a] = set<int>();
        }
        mapping2[a].insert(b);
        swap(a, b);
        if (mapping2.find(a) == mapping2.end()) {
            mapping2[a] = set<int>();
        }
        mapping2[a].insert(b);
    }
    int res = 0;
    for (int i = 1; i <= n; i++) {
        if (mapping1.find(i) != mapping1.end()) {
            for (auto j : mapping1[i]) {
                if (mapping2.find(j) != mapping2.end() &&
                    mapping2[j].find(i) != mapping2[j].end()) {
                    res++;
                }
            }
        }
    }
    res /= 2;
    cout << res << endl;
    return 0;
}
