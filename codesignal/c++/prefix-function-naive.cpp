// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/prefix-function-naive.html .

std::vector<int> prefixFunctionNaive(std::string s) {
    using namespace std;
    vector<int> res(s.size(), 0);
    for (int i = 1; i < s.size(); i++) {
        for (int len = 1; len <= i; len++) {
            string t1 = s.substr(0, len);
            string t2 = s.substr(i - len + 1, len);
            if (t1 == t2) {
                res[i] = len;
            }
        }
    }
    return res;
}
