// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/uniq-or-not-uniq.html .

#include <set>

std::vector<int> testit(std::vector<int> a, std::vector<int> b) {
    using namespace std;
    set<int> a1(a.begin(), a.end());
    set<int> b1(b.begin(), b.end());
    vector<int> res(a1.begin(), a1.end());
    res.insert(res.end(), b1.begin(), b1.end());
    sort(res.begin(), res.end());
    return res;
}
