// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/simple-fun-399-make-ascending-sequences.html .

#include <cmath>
#include <map>

using namespace std;

map<int, int> cache;

int make_sequence(int n) {
    if (n <= 1) {
        return n;
    }
    if (cache.find(n) != cache.end()) {
        return cache[n];
    }
    int res = 1;
    for (int i = 1; i <= n / 2; i++) {
        res += make_sequence(i);
    }
    cache[n] = res;
    return res;
}
