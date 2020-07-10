// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/counting-valleys.html .

#include <string>

int countValleys(const std::string &s) {
    using namespace std;
    int res = 0, h = 0;
    for (auto ch : s) {
        int nh = h;
        if (ch == 'U') {
            nh++;
        } else if (ch == 'D') {
            nh--;
        }
        if (h < 0 && nh == 0) {
            res++;
        }
        h = nh;
    }
    return res;
}
