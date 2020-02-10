// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/tv-remote.html .

using namespace std;

int tv_remote(const string &word) {
    vector<string> cache = {"abcde123", "fghij456", "klmno789", "pqrst.@0", "uvwxyz_/"};
    int res = 0;
    int x = 0, y = 0;
    for (auto &ch: word) {
        int x1 = -1, y1;
        for (int i = 0; i < cache.size(); i++) {
            for (int j = 0; j < cache[i].size(); j++) {
                if (cache[i][j] == ch) {
                    x1 = j;
                    y1 = i;
                    break;
                }
            }
            if (x1 != -1) {
                break;
            }
        }
        res += abs(x1 - x) + abs(y1 - y) + 1;
        x = x1;
        y = y1;
    }
    return res;
}

