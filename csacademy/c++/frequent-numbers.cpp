// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/frequent-numbers.html .

#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    map<int, int> cache;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (cache.find(num) == cache.end()) {
            cache[num] = 0;
        }
        cache[num]++;
    }
    int res = 0;
    for (auto kv : cache) {
        if (kv.second >= k) {
            res++;
        }
    }
    cout << res;
    return 0;
}
