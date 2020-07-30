// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/acronyms.html .

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
    vector<string> raws(n);
    int cnts[26] = {0};
    for (int i = 0; i < n; i++) {
        string item;
        cin >> item;
        raws[i] = item;
        cnts[item[0] - 'a']++;
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        auto raw = raws[i];
        int heads[26] = {0};
        copy(cnts, cnts + 26, heads);
        heads[raw[0] - 'a']--;
        bool valid = true;
        for (auto ch : raw) {
            int idx = ch - 'a';
            heads[idx]--;
            if (heads[idx] < 0) {
                valid = false;
                break;
            }
        }
        if (valid) {
            res++;
        }
    }
    cout << res;
    return 0;
}
