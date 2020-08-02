// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/three-ones.html .

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
    string item;
    cin >> n >> item;
    item = "1" + item + "1";
    int res = 0;
    vector<int> idxes;
    for (int i = 0; i < item.size(); i++) {
        if (item[i] == '1') {
            if (idxes.size() < 4) {
                idxes.push_back(i);
            } else {
                res = max(res, idxes[3] - idxes[0]);
                idxes[0] = idxes[1];
                idxes[1] = idxes[2];
                idxes[2] = idxes[3];
                idxes[3] = i;
            }
        }
    }
    res = max(res, idxes[3] - idxes[0]);
    cout << res << endl;
    return 0;
}
