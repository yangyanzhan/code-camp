// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/grid-challenge.html .

string gridChallenge(vector<string> grid) {
    for (auto &row: grid) {
        sort(row.begin(), row.end());
    }
    for (int j = 0; j < grid[0].size(); j++) {
        for (int i = 1; i < grid.size(); i++) {
            if (grid[i][j] < grid[i - 1][j]) {
                return "NO";
            }
        }
    }
    return "YES";
}
