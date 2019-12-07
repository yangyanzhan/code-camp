// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/great-renaming.html .

std::vector<std::vector<bool>> greatRenaming(std::vector<std::vector<bool>> roadRegister) {
    using namespace std;
    int n = roadRegister.size();
    vector<vector<bool>> res;
    for (int i = 0; i < n; i++) {
        vector<bool> row;
        for (int j = 0; j < n; j++) {
            int i1 = (i - 1 + n) % n;
            int j1 = (j - 1 + n) % n;
            row.push_back(roadRegister[i1][j1]);
        }
        res.push_back(row);
    }
    return res;
}

