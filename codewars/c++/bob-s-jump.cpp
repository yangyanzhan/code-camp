// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/bob-s-jump.html .

using namespace std;

long count(int n, int k, map<int, long> &cache) {
    if (n == 0) {
        return 1;
    }
    if (cache.find(n) != cache.end()) {
        return cache[n];
    }
    long res = 0;
    for (int i = 1; i <= min(k, n); i++) {
        res += count(n - i, k, cache);
    }
    cache[n] = res;
    return res;
}

long count_ways(int n, int k) {
    map<int, long> cache;
    return count(n, k, cache);
}
