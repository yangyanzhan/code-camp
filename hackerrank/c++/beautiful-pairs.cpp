// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/beautiful-pairs.html .

int beautifulPairs(vector<int> A, vector<int> B) {
    map<int, int> cache;
    for (auto num: A) {
        if (cache.find(num) == cache.end()) {
            cache[num] = 0;
        }
        cache[num]++;
    }
    int res = 0;
    for (auto num: B) {
        if (cache.find(num) != cache.end()) {
            if (cache[num] > 0) {
                res++;
                cache[num]--;
            }
        }
    }
    if (res < min(A.size(), B.size())) {
        res++;
    } else {
        res--;
    }
    return res;
}
