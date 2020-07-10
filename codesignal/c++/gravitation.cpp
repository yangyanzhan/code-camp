// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/gravitation.html .

std::vector<int> gravitation(std::vector<std::string> rows) {
    using namespace std;
    int m = rows.size(), n = rows[0].size();
    vector<int> res;
    while (true) {
        for (int j = 0; j < n; j++) {
            int c = 0;
            for (int i = m - 2; i >= 0; i--) {
                if (rows[i][j] == '#' && rows[i + 1][j] == '.') {
                    swap(rows[i][j], rows[i + 1][j]);
                    c++;
                }
            }
            if (c == 0) {
                res.push_back(j);
            }
        }
        if (res.size() > 0) {
            break;
        }
    }
    return res;
}
