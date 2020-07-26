// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/simple-string-division-ii.html .

using namespace std;

unsigned solve(const std::string &s, unsigned k) {
    vector<string> items;
    int pre = -1;
    for (int i = 0; i < s.size(); i++) {
        auto ch = s[i];
        if (isdigit(ch)) {
            if (pre == -1) {
                pre = i;
            }
        }
        if (pre != -1) {
            int len = 0;
            if (ch == ' ') {
                len = i - pre;
            } else if (i == s.size() - 1) {
                len = i - pre + 1;
            }
            if (len > 0) {
                items.push_back(s.substr(pre, len));
                pre = -1;
            }
        }
    }
    long long res = 0;
    for (int i = 0; i < items.size(); i++) {
        for (int j = i + 1; j < items.size(); j++) {
            auto a = items[i], b = items[j];
            if (stoll(a + b) % k == 0) {
                res++;
            }
            if (stoll(b + a) % k == 0) {
                res++;
            }
        }
    }
    return res;
}
