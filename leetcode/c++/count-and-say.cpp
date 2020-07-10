// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/count-and-say.html .

class Solution {
  public:
    string countAndSay(int n) {
        string res = "1";
        for (int i = 1; i < n; i++) {
            res = count(res);
        }
        return res;
    }

    string count(string item) {
        string res;
        char pre = '\0';
        int count = 0;
        for (auto &ch : item) {
            if (ch == pre) {
                count++;
            } else {
                if (count > 0) {
                    res += to_string(count);
                    res += pre;
                }
                pre = ch;
                count = 1;
            }
        }
        res += to_string(count);
        res += pre;
        return res;
    }
};
