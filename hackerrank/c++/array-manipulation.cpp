// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/array-manipulation.html .

long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long> nums(n, 0);
    for (auto query : queries) {
        long a = query[0], b = query[1], addon = query[2];
        nums[a - 1] += addon;
        if (b < n) {
            nums[b] -= addon;
        }
    }
    long res = numeric_limits<long>::min();
    long num = 0;
    for (auto addon : nums) {
        num += addon;
        res = max(res, num);
    }
    return res;
}
