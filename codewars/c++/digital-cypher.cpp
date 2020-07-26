// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/digital-cypher.html .

#include <sstream>

using namespace std;

class Kata {
  public:
    static std::vector<int> Encode(std::string str, int n) {
        auto offsets = to_string(n);
        int m = offsets.size();
        vector<int> res;
        for (int i = 0; i < str.size(); i++) {
            int c = str[i] - 'a' + 1 + (offsets[i % m] - '0');
            res.push_back(c);
        }
        return res;
    }
};
