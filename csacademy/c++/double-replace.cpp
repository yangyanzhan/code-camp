// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/double-replace.html .

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
    string s, a, b;
    cin >> s >> a >> b;
    int idx = 0;
    while (idx < s.size()) {
        bool replaced = false;
        int idx1 = s.find(a, idx);
        int idx2 = s.find(b, idx);
        if (idx1 == idx) {
            s = s.substr(0, idx) + b + s.substr(idx + a.size());
            idx = idx + b.size();
            replaced = true;
        }
        if (idx2 == idx) {
            s = s.substr(0, idx) + a + s.substr(idx + b.size());
            idx = idx + a.size();
            replaced = true;
        }
        if (!replaced) {
            idx++;
        }
    }
    cout << s;
    return 0;
}
