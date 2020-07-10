// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/migratory-birds.html .

int migratoryBirds(vector<int> arr) {
    map<int, int> cache;
    for (auto num : arr) {
        if (cache.find(num) == cache.end()) {
            cache[num] = 0;
        }
        cache[num]++;
    }
    int max_count = 0, max_bird = 0;
    for (auto it : cache) {
        if (it.second > max_count) {
            max_count = it.second;
            max_bird = it.first;
        }
    }
    return max_bird;
}
