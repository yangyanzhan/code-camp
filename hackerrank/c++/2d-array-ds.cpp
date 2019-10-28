// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

int hourglassSum(vector<vector<int>> arr) {
    int res = numeric_limits<int>::min();
    for (int i = 1; i <= arr.size() - 2; i++) {
        for (int j = 1; j <= arr[i].size() - 2; j++) {
            int sum = 0;
            sum += arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1];
            sum += arr[i][j];
            sum += arr[i + 1][j - 1] + arr[i + 1][j] + arr[i + 1][j + 1];
            res = max(res, sum);
        }
    }
    return res;
}
