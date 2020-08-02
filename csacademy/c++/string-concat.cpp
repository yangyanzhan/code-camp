// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/string-concat.html .

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
    int n;
    cin >> n;
    vector<string> items(n);
    for (int i = 0; i < n; i++) {
        cin >> items[i];
    }
    for (int i = 0; i < n; i++) {
        auto item = items[i];
        bool found = false;
        for (int j = 0; j < n; j++) {
            if (j == i) {
                continue;
            }
            for (int k = 0; k < n; k++) {
                if (k == i || k == j) {
                    continue;
                }
                if (item == items[j] + items[k]) {
                    cout << (i + 1) << " ";
                    found = true;
                    break;
                }
            }
            if (found) {
                break;
            }
        }
    }
    return 0;
}
