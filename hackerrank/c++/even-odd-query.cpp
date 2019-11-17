// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/even-odd-query.html .

vector<string> solve(vector<int> arr, vector<vector<int>> queries) {
    vector<string> res;
    for (auto query: queries) {
        int x = query[0], y = query[1];
        if (x > y) {
            res.push_back("Odd");
        } else {
            if (x < y && arr[x] == 0) {
                res.push_back("Odd");
            } else {
                res.push_back(arr[x - 1] % 2 == 0 ? "Even" : "Odd");
            }
        }
    }
    return res;
}
