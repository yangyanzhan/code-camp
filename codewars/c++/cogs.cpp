// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/cogs.html .

using namespace std;

double cog_rpm(const std::vector<int> &cogs) {
    double res = 1;
    for (int i = 0; i < cogs.size() - 1; i++) {
        res *= cogs[i] / (cogs[i + 1] + 0.0);
    }
    double flag = cogs.size() % 2 == 0 ? -1 : 1;
    res *= flag;
    return res;
}
