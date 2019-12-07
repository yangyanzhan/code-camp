// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/cyclic-string.html .

int cyclicString(std::string s) {
    using namespace std;
    for (int len = 1; len <= s.size(); len++) {
        bool valid = true;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != s[i % len]) {
                valid = false;
                break;
            }
        }
        if (valid) {
            return len;
        }
    }
    return -1;
}

