// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

vector<int> maximumPerimeterTriangle(vector<int> sticks) {
    sort(sticks.begin(), sticks.end());
    for (int i = sticks.size() - 1; i >= 2; i--) {
        for (int j = i - 1; j >= 1; j--) {
            for (int k = j - 1; k >= 0; k--) {
                int a = sticks[i], b = sticks[j], c = sticks[k];
                if (b + c <= a) {
                    continue;
                }
                return vector<int>{c, b, a};
            }
        }
    }
    return vector<int>{-1};
}
