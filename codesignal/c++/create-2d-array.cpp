// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/create-2d-array.html .

std::vector<std::vector<int>> create2DArray(std::vector<int> lengths) {
    using namespace std;
    vector<vector<int>> res;
    for (auto len : lengths) {
        vector<int> row(len);
        for (int i = 0; i < len; i++) {
            row[i] = i;
        }
        res.push_back(row);
    }
    return res;
}
