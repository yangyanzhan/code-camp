// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/anagrams.html .

#include <algorithm>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> cache;
    int res = 0;
    for (int i = 0; i < n; i++) {
        string item;
        cin >> item;
        sort(item.begin(), item.end());
        if (cache.find(item) == cache.end()) {
            cache[item] = 0;
        }
        cache[item]++;
        res = max(res, cache[item]);
    }
    cout << res;
    return 0;
}
