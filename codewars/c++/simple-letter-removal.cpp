// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/simple-letter-removal.html .

using namespace std;

std::string solve(const std::string &s_in, unsigned k) {
    string s = s_in;
    char ch = 'a';
    int idx = 0;
    while (k > 0 && s.size() > 0) {
        if (idx >= s.size()) {
            ch++;
            idx = 0;
            continue;
        }
        if (ch > 'z') {
            s = s.substr(1);
            k--;
        } else {
            if (s[idx] != ch) {
                idx++;
            } else {
                s = s.substr(0, idx) + s.substr(idx + 1);
                k--;
            }
        }
    }
    return s;
}
