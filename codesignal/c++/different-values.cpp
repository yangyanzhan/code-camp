// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/different-values.html .

int differentValues(std::vector<int> a, int d) {
    int n = a.size();
    int best = -1;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = abs(a[i] - a[j]);
            if (diff <= d) {
                if (best == -1) {
                    best = diff;
                } else {
                    best = max(best, diff);
                }
                if (best == d) {
                    break;
                }
            }
        }
    }
    return best;
}
