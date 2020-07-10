// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/decrypt-string-from-alphabet-to-integer-mapping.html .

class Solution {
  public:
    string freqAlphabets(string s) {
        int idx = string::npos;
        string res;
        while ((idx = s.find("#")) != string::npos) {
            for (int i = 0; i < idx - 2; i++) {
                res += 'a' + s[i] - '1';
            }
            res += 'a' + stoi(s.substr(idx - 2, 2)) - 1;
            s = s.substr(idx + 1);
        }
        for (int i = 0; i < s.size(); i++) {
            res += 'a' + s[i] - '1';
        }
        return res;
    }
};
