// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/divisible-sum-pairs.html .

int divisibleSumPairs(int n, int k, vector<int> ar) {
    vector<int> cache(k, 0);
    for (auto num: ar) {
        cache[num % k]++;
    }
    int res = 0;
    res += (long long)cache[0] * (cache[0] - 1) / 2;
    for (int i = 1; i <= k / 2; i++) {
        if (2 * i == k) {
            res += (long long)cache[i] * (cache[i] - 1) / 2;
        } else {
            res += (long long)cache[i] * cache[k - i];
        }
    }
    return res;
}
