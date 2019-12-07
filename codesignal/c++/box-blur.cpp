// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/box-blur.html .

std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> image) {
    using namespace std;
    int m = image.size(), n = image[0].size();
    vector<vector<int>> res;
    for (int i = 1; i < m - 1; i++) {
        vector<int> row;
        for (int j = 1; j < n - 1; j++) {
            int sum = 0;
            for (int i1 = -1; i1 <= 1; i1++) {
                for (int j1 = -1; j1 <= 1; j1++) {
                    sum += image[i + i1][j + j1];
                }
            }
            row.push_back(sum / 9);
        }
        res.push_back(row);
    }
    return res;
}
