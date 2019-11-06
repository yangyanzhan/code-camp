// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

int minimumDistances(vector<int> nums) {
    int res = -1;
    map<int, int> cache;
    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        if (cache.find(num) != cache.end()) {
            int dist = i - cache[num];
            res = res == -1 ? dist : min(res, dist);
            if (res == 1) {
                break;
            }
        }
        cache[num] = i;
    }
    return res;
}
