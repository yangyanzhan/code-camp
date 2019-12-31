// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codeforces/way-too-long-words.html .

#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

#include <set>
#include <map>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <chrono>
#include <bitset>
#include <string>
#include <vector>
#include <limits>
#include <numeric>
#include <utility>
#include <sstream>
#include <fstream>
#include <iostream>
#include <iterator>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string word;
        cin >> word;
        if (word.size() <= 10) {
            cout << word << endl;
        } else {
            cout << word.front() << (word.size() - 2) << word.back() << endl;
        }
    }
    return 0;
}

