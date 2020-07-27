// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/shoe-pairs.html .

#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, vector<int>> cache;
    for (int i = 0; i < n; i++) {
        int size;
        string type;
        cin >> size >> type;
        if (cache.find(size) == cache.end()) {
            cache[size] = vector<int>(2, 0);
        }
        cache[size][type == "L" ? 0 : 1]++;
    }
    int res = 0;
    for (auto kv : cache) {
        res += min(kv.second[0], kv.second[1]);
    }
    cout << res;
    return 0;
}
