// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/scariest-mask.html .

int scariestMask(std::vector<std::string> mask) {
    using namespace std;
    int res = 0;
    for (auto line : mask) {
        int n = line.size();
        for (int i = 0; i < n / 2; i++) {
            if (line[i] != line[n - 1 - i]) {
                res++;
            }
        }
    }
    return res;
}
