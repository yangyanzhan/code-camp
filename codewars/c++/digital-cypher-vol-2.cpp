// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/digital-cypher-vol-2.html .

#include <sstream>

using namespace std;

class Kata {
  public:
    static string Decode(vector<int> code, int n) {
        auto offsets = to_string(n);
        int m = offsets.size();
        stringstream ss;
        for (int i = 0; i < code.size(); i++) {
            int c = code[i] - (offsets[i % m] - '0');
            ss << (char)(c - 1 + 'a');
        }
        return ss.str();
    }
};
