// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/douchebag-parking.html .

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
    int n, w;
    cin >> n >> w;
    int res = -1;
    int sum = 0;
    int start = -1;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if (a == 1) {
            if (start == -1) {
                start = i;
            }
            sum += b;
        }
        if (a == 0) {
            if (start >= 0) {
                if (sum >= w) {
                    res = start + 1;
                    break;
                }
            }
            sum = 0;
            start = -1;
        } else if (i == n - 1) {
            if (start >= 0) {
                if (sum >= w) {
                    res = start + 1;
                    break;
                }
            }
        }
    }
    cout << res;
    return 0;
}
