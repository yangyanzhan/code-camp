// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/all-inclusive.html .

#include <set>

class Rotations {
  public:
    static bool containAllRots(const std::string &s,
                               std::vector<std::string> &arr) {
        using namespace std;
        set<string> cache1;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            string item;
            for (int j = i; j < n; j++) {
                item += s[j];
            }
            for (int j = 0; j < i; j++) {
                item += s[j];
            }
            cache1.insert(item);
        }
        set<string> cache2(arr.begin(), arr.end());
        set<string> cache3;
        set_intersection(cache1.begin(), cache1.end(), cache2.begin(),
                         cache2.end(), inserter(cache3, cache3.begin()));
        return cache3.size() == cache1.size();
    }
};
