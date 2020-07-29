// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/maximize-profit.html .

#include <algorithm>
#include <bitset>
#include <chrono>
#include <cmath>
#include <cstdlib>
#include <functional>
#include <iomanip>
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
    double s, k;
    int q;
    cin >> s >> q >> k;
    vector<double> rs(q);
    for (int i = 0; i < q; i++) {
        double r;
        cin >> r;
        rs[i] = 1 + r / 100;
    }
    sort(rs.begin(), rs.end());
    for (int i = 0; i < q; i++) {
        double t1 = s + k;
        double t2 = s * rs[i];
        s = max(t1, t2);
    }
    cout << setprecision(11) << s;
    return 0;
}
