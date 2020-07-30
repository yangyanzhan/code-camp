// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/digit-holes.html .

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
    int a, b;
    cin >> a >> b;
    int res = 0;
    int maxi = -1;
    for (int n = a; n <= b; n++) {
        int cnt = 0;
        auto item = to_string(n);
        for (auto ch : item) {
            if (ch == '0' || ch == '6' || ch == '9') {
                cnt++;
            } else if (ch == '8') {
                cnt += 2;
            }
        }
        if (cnt > maxi) {
            maxi = cnt;
            res = n;
        }
    }
    cout << res;
    return 0;
}
