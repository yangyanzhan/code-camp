// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/luck-balance.html .

int luckBalance(int k, vector<vector<int>> contests) {
    vector<int> imps;
    int res = 0;
    for (auto contest : contests) {
        bool important = contest[1] == 1;
        int luck = contest[0];
        if (!important) {
            res += luck;
        } else {
            imps.push_back(luck);
        }
    }
    sort(imps.begin(), imps.end());
    reverse(imps.begin(), imps.end());
    for (int i = 0; i < imps.size(); i++) {
        res += i < k ? imps[i] : -imps[i];
    }
    return res;
}
