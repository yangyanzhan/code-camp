// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/increasing-decreasing-string.html .

class Solution {
  public:
    string sortString(string s) {
        vector<int> counts(26);
        for (auto ch : s) {
            counts[ch - 'a']++;
        }
        string res;
        string tmp;
        bool inc = true;
        while (true) {
            tmp = res;
            if (inc) {
                for (int i = 0; i < 26; i++) {
                    if (counts[i] > 0) {
                        tmp += i + 'a';
                        counts[i]--;
                    }
                }
            } else {
                for (int i = 25; i >= 0; i--) {
                    if (counts[i] > 0) {
                        tmp += i + 'a';
                        counts[i]--;
                    }
                }
            }
            if (tmp.size() == res.size()) {
                break;
            } else {
                res = tmp;
                inc = !inc;
            }
        }
        return res;
    }
};
