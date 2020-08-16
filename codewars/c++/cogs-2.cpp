// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/cogs-2.html .

using namespace std;

pair<double, double> cog_rpm(const vector<int> &cogs, int n) {
    double r1 = 1, r2 = 1;
    for (int i = n; i >= 1; i--) {
        r1 *= -(cogs[i] + 0.0) / cogs[i - 1];
    }
    for (int i = n; i < cogs.size() - 1; i++) {
        r2 *= -(cogs[i] + 0.0) / cogs[i + 1];
    }
    return {r1, r2};
}
