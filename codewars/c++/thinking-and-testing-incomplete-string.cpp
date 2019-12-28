// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/thinking-and-testing-incomplete-string.html .

std::string testit(std::string s) {
    using namespace std;
    string res;
    int n = s.size();
    for (int i = 0; i < n; i += 2) {
        if (i == n - 1) {
            res += s[i];
        } else {
            res += (char)((s[i] + s[i + 1]) / 2);
        }
    }
    return res;
}
