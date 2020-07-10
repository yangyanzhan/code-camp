// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/financial-crisis.html .

std::vector<std::vector<std::vector<bool>>>
financialCrisis(std::vector<std::vector<bool>> roadRegister) {
    using namespace std;
    int n = roadRegister.size();
    vector<vector<vector<bool>>> res;
    for (int i = 0; i < n; i++) {
        vector<vector<bool>> graph;
        for (int i1 = 0; i1 < n; i1++) {
            if (i1 == i) {
                continue;
            }
            vector<bool> row;
            for (int i2 = 0; i2 < n; i2++) {
                if (i2 == i) {
                    continue;
                }
                row.push_back(roadRegister[i1][i2]);
            }
            graph.push_back(row);
        }
        res.push_back(graph);
    }
    return res;
}
