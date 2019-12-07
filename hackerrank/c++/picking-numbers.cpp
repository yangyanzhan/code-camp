// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/picking-numbers.html .

int pickingNumbers(vector<int> nums) {
    map<int, int> cache;
    for (auto num: nums) {
        if (cache.find(num) == cache.end()) {
            cache[num] = 0;
        }
        cache[num]++;
    }
    int res = 0;
    for (auto it: cache) {
        int num = it.first, count = it.second;
        res = max(res, count);
        if (cache.find(num - 1) != cache.end()) {
            res = max(res, cache[num - 1] + count);
        }
    }
    return res;
}
