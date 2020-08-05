// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/word-ordering.html .

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

int cache[26] = {0};

int camp(char c1, char c2) {
    bool u1 = isupper(c1), u2 = isupper(c2);
    if (!u1 && u2) {
        return -1;
    }
    if (u1 && !u2) {
        return 1;
    }
    char t1 = tolower(c1), t2 = tolower(c2);
    int diff = cache[t1 - 'a'] - cache[t2 - 'a'];
    return diff;
}

int main() {
    ios::sync_with_stdio(false);
    string item;
    cin >> item;
    for (int i = 0; i < 26; i++) {
        cache[item[i] - 'a'] = i;
    }
    int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    sort(words.begin(), words.end(), [](string w1, string w2) {
        int n1 = w1.size(), n2 = w2.size();
        for (int i = 0; i < min(n1, n2); i++) {
            char c1 = w1[i], c2 = w2[i];
            int diff = camp(c1, c2);
            if (diff == 0) {
                continue;
            }
            return diff < 0 ? true : false;
        }
        return w1.size() < w2.size() ? true : false;
    });
    for (int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }
    return 0;
}
