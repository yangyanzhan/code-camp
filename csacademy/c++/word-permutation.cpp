// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/word-permutation.html .

#include <algorithm>
#include <bitset>
#include <chrono>
#include <cmath>
#include <cstdlib>
#include <functional>
#include <iostream>
#include <list>
#include <map>
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
    vector<pair<string, int>> items;
    for (int i = 1; i <= n; i++) {
        string item;
        cin >> item;
        items.push_back(make_pair(item, i));
    }
    sort(items.begin(), items.end(),
         [](pair<string, int> a, pair<string, int> b) {
             return get<0>(a) < get<0>(b);
         });
    for (int i = 1; i <= n; i++) {
        cout << get<1>(items[i - 1]) << " ";
    }
    return 0;
}
