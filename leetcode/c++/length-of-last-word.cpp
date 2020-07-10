// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/length-of-last-word.html .

class Solution {
  public:
    int lengthOfLastWord(string s) {
        while (s[s.size() - 1] == ' ') {
            s = s.substr(0, s.size() - 1);
        }
        auto idx = s.rfind(" ");
        if (idx == string::npos) {
            return s.size();
        } else {
            return s.size() - idx - 1;
        }
    }
};
