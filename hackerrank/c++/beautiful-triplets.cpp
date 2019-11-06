// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

int beautifulTriplets(int d, vector<int> arr) {
    map<int, int> cache;
    for (auto num: arr) {
        if (cache.find(num) == cache.end()) {
            cache[num] = 0;
        }
        cache[num]++;
    }
    int res = 0;
    for (auto it: cache) {
        int a1 = it.first;
        if (cache.find(a1 + d) != cache.end() && cache.find(a1 + 2 * d) != cache.end()) {
            res += it.second * cache[a1 + d] * cache[a1 + 2 * d];
        }
    }
    return res;
}
