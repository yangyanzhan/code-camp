// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/simple-string-reversal-ii.html .

using namespace std;

std::string solve(std::string s, int a, int b) {
    int n = s.size();
    a = max(0, a);
    a = min(a, n - 1);
    b = max(0, b);
    b = min(b, n - 1);
    b = max(a, b);
    reverse(s.begin() + a, s.begin() + b + 1);
    return s;
}
