// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/unique-binary-search-trees-ii.html .

int Solution::numTrees(int n) {
    if (n <= 1) {
        return 1;
    }
    vector<int> cache(n + 1, 0);
    cache[0] = cache[1] = 1;
    for (int i = 2; i <= n; i++) {
        for (int k = 1; k <= i; k++) {
            cache[i] += cache[k - 1] * cache[i - k];
        }
    }
    return cache[n];
}
