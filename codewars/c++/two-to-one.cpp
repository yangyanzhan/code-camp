// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/two-to-one.html .

#include <algorithm>
#include <set>

class TwoToOne {
  public:
    static std::string longest(const std::string &s1, const std::string &s2) {
        using namespace std;
        set<char> cache;
        for (auto ch : s1) {
            cache.insert(ch);
        }
        for (auto ch : s2) {
            cache.insert(ch);
        }
        return string(cache.begin(), cache.end());
    }
};
