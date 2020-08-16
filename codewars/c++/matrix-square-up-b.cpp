// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/matrix-square-up-b.html .

using namespace std;

vector<vector<string>> matrixSquareUp(int b) {
    vector<vector<string>> res;
    for (int i = 0; i < b; i++) {
        vector<string> row;
        for (int j = 0; j < b; j++) {
            if (i + j < b - 1) {
                row.push_back("x");
            } else {
                row.push_back(to_string(b - j));
            }
        }
        res.push_back(row);
    }
    return res;
}
