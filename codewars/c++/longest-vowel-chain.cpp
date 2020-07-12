// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/longest-vowel-chain.html .

using namespace std;

#include <set>

int solve(string s) {
    set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int res = 0;
    int last = -1;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        int now = tolower(s[i]);
        if (vowels.find(now) != vowels.end()) {
            if (last == -1) {
                last = i;
            }
            res = max(res, i - last + 1);
        } else {
            last = -1;
        }
    }
    return res;
}
