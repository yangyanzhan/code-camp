// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/friday-13.html .

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
    vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> monthes = {"Monday", "Tuesday",  "Wednesday", "Thursday",
                              "Friday", "Saturday", "Sunday"};
    string raw;
    cin >> raw;
    int day =
        distance(monthes.begin(), find(monthes.begin(), monthes.end(), raw));
    int dist = day <= 4 ? (4 - day) : (5 + 6 - day);
    int num = 0;
    int res = 0;
    for (int i = 0; i < 12; i++) {
        int t = num + 13 - 1;
        t %= 7;
        if (t == dist) {
            res++;
        }
        num += days[i];
    }
    cout << res << endl;
    return 0;
}
