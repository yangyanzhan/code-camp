// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/letter-combinations-of-a-phone-number.html .

using namespace std;

class Solution {
  public:
    vector<string> letterCombinations(string digits) {
        map<int, vector<string>> cache;
        cache[2] = {"a", "b", "c"};
        cache[3] = {"d", "e", "f"};
        cache[4] = {"g", "h", "i"};
        cache[5] = {"j", "k", "l"};
        cache[6] = {"m", "n", "o"};
        cache[7] = {"p", "q", "r", "s"};
        cache[8] = {"t", "u", "v"};
        cache[9] = {"w", "x", "y", "z"};
        if (digits.size() == 0) {
            return {};
        }
        auto headers = cache[digits[0] - '0'];
        auto subRes = letterCombinations(digits.substr(1));
        vector<string> res;
        for (auto header : headers) {
            if (subRes.size() == 0) {
                res.push_back(header);
            } else {
                for (auto subItem : subRes) {
                    res.push_back(header + subItem);
                }
            }
        }
        return res;
    }
};
