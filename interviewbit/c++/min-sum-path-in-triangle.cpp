// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/min-sum-path-in-triangle.html .

int Solution::minimumTotal(vector<vector<int>> &triangle) {
    int m = triangle.size();
    if (m <= 0) {
        return 0;
    }
    int n = triangle[m - 1].size();
    if (n <= 0) {
        return 0;
    }
    vector<int> cache = triangle[m - 1];
    for (int i = 1; i <= m - 1; i++) {
        for (int j = 0; j < n - i; j++) {
            cache[j] = min(cache[j], cache[j + 1]) + triangle[m - 1 - i][j];
        }
    }
    return cache[0];
}
