// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/palindrome-number.html .

class Solution {
  public:
    bool isPalindrome(int x) {
        auto item = to_string(x);
        int n = item.size();
        for (int i = 0; i < n / 2; i++) {
            if (item[i] != item[n - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};
