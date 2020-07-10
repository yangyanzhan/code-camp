// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/maximum-length-difference.html .

#include <algorithm>
#include <functional>
#include <string>

class MaxDiffLength {
  public:
    static int mxdiflg(std::vector<std::string> &a1,
                       std::vector<std::string> &a2) {
        using namespace std;
        if (a1.empty() || a2.empty()) {
            return -1;
        }
        function<bool(string, string)> cmp = [](string item1, string item2) {
            return item1.size() < item2.size();
        };
        int maxi1 = max_element(a1.begin(), a1.end(), cmp)->size();
        int mini1 = min_element(a1.begin(), a1.end(), cmp)->size();
        int maxi2 = max_element(a2.begin(), a2.end(), cmp)->size();
        int mini2 = min_element(a2.begin(), a2.end(), cmp)->size();
        return max(abs(maxi1 - mini2), abs(maxi2 - mini1));
    }
};
