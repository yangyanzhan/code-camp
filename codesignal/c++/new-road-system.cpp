// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/new-road-system.html .

bool newRoadSystem(std::vector<std::vector<bool>> roadRegister) {
    using namespace std;
    int n = roadRegister.size();
    for (int i = 0; i < n; i++) {
        int outs = 0;
        for (int j = 0; j < n; j++) {
            if (roadRegister[i][j]) {
                outs++;
            }
        }
        int ins = 0;
        for (int j = 0; j < n; j++) {
            if (roadRegister[j][i]) {
                ins++;
            }
        }
        if (ins != outs) {
            return false;
        }
    }
    return true;
}

