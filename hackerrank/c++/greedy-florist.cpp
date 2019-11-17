// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/greedy-florist.html .

int getMinimumCost(int k, vector<int> c) {
    sort(c.begin(), c.end());
    reverse(c.begin(), c.end());
    int res = 0;
    for (int i = 0; i < c.size(); i++) {
        res += (i / k + 1) * c[i];
    }
    return res;
}
