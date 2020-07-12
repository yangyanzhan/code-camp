// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/indexed-capitalization.html .

using namespace std;

std::string capitalize(std::string s, std::vector<int> idxs) {
    int n = s.size();
    for (auto idx : idxs) {
        if (0 <= idx && idx < n) {
            s[idx] = toupper(s[idx]);
        }
    }
    return s;
}
