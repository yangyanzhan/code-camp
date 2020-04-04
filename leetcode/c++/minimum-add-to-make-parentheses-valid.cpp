// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/minimum-add-to-make-parentheses-valid.html .

class Solution {
public:
    int minAddToMakeValid(string S) {
        int res = 0;
        int left = 0;
        for (auto ch: S) {
            if (ch == '(') {
                left++;
            } else if (ch == ')') {
                if (left == 0) {
                    res++;
                } else {
                    left--;
                }
            }
        }
        res += left;
        return res;
    }
};

