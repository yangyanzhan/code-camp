// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/adjacent-vowels.html .

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

bool is_vowel(char ch) {
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    return find(vowels.begin(), vowels.end(), ch) != vowels.end();
}

int main() {
    int n;
    string item;
    cin >> n >> item;
    int res = 0;
    for (int i = 0; i < n - 1; i++) {
        if (is_vowel(item[i]) && is_vowel(item[i + 1])) {
            res++;
        }
    }
    cout << res;
    return 0;
}
