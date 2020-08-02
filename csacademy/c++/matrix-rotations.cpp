// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/matrix-rotations.html .

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
    vector<vector<int>> numss(n);
    for (int i = 0; i < n; i++) {
        vector<int> nums(n);
        for (int j = 0; j < n; j++) {
            cin >> nums[j];
        }
        numss[i] = nums;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (numss[i][j] == 1 || numss[j][n - 1 - i] == 1 ||
                numss[n - 1 - i][n - 1 - j] == 1 || numss[n - 1 - j][i] == 1) {
                cout << 1 << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
