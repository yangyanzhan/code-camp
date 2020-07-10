// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/distinct-numbers-in-window.html .

vector<int> Solution::dNums(vector<int> &A, int B) {
    int n = A.size();
    vector<int> res;
    if (n < B) {
        return res;
    }
    map<int, int> cache;
    for (int i = 0; i < B; i++) {
        int num = A[i];
        if (cache.find(num) == cache.end()) {
            cache[num] = 0;
        }
        cache[num]++;
    }
    res.push_back(cache.size());
    for (int i = 1; i <= n - B; i++) {
        int pre = A[i - 1], now = A[B + i - 1];
        cache[pre]--;
        if (cache.find(now) == cache.end()) {
            cache[now] = 0;
        }
        cache[now]++;
        if (cache[pre] == 0) {
            cache.erase(pre);
        }
        res.push_back(cache.size());
    }
    return res;
}
