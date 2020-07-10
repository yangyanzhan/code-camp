// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/split-a-string-in-balanced-strings.html .

class Solution {
  public:
    int balancedStringSplit(string s) {
        int res = 0, lc = 0, rc = 0;
        while (s.size() > 0) {
            if (s[0] == 'L') {
                lc++;
            } else {
                rc++;
            }
            for (int i = 1; i < s.size(); i++) {
                if (s[i] == 'L') {
                    lc++;
                } else {
                    rc++;
                }
                if (lc == rc) {
                    break;
                }
            }
            res++;
            s = s.substr(lc + rc);
            lc = 0;
            rc = 0;
        }
        return res;
    }
};
