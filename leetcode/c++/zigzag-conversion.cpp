// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/zigzag-conversion.html .

using namespace std;

class Solution {
  public:
    string convert(string s, int numRows) {
        if (numRows == 1) {
            return s;
        }
        vector<string> items(numRows);
        for (int i = 0; i < s.size(); i++) {
            int pos = i % (2 * numRows - 2);
            if (pos >= numRows) {
                pos = numRows - 1 - (pos - numRows + 1);
            }
            items[pos] = items[pos] + s[i];
        }
        string res;
        for (auto item : items) {
            res += item;
        }
        return res;
    }
};
