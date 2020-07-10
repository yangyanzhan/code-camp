// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/ways-to-decode.html .

int Solution::numDecodings(string s) {
    int n = s.length(), ppre = 1, pre = 1;
    if (n <= 0) {
        return 0;
    }
    for (int i = 0; i < n; i++) {
        int now = 0;
        char ch = s[i];
        if ('1' <= ch && ch <= '9') {
            now += pre;
        }
        if (i >= 1) {
            int num = stoi(s.substr(i - 1, 2));
            if (10 <= num && num <= 26) {
                now += ppre;
            }
        }
        ppre = pre;
        pre = now;
    }
    return pre;
}

