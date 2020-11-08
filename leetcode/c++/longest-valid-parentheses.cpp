// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/longest-valid-parentheses.html .

using namespace std;

class Solution {
  public:
    int longestValidParentheses(string s) {
        int res = 0;
        int start = 0;
        vector<int> stack;
        for (int i = 0; i < s.size(); i++) {
            auto ch = s[i];
            if (ch == '(') {
                stack.push_back(i);
            } else {
                if (stack.size() > 0) {
                    stack.pop_back();
                    if (stack.empty()) {
                        res = max(res, i - start + 1);
                    } else {
                        res = max(res, i - stack[stack.size() - 1]);
                    }
                } else {
                    start = i + 1;
                }
            }
        }
        return res;
    }
};
