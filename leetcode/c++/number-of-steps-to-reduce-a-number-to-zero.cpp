// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/number-of-steps-to-reduce-a-number-to-zero.html .

class Solution {
  public:
    int numberOfSteps(int num) {
        if (num == 0) {
            return 0;
        }
        if (num % 2 == 0) {
            return 1 + numberOfSteps(num / 2);
        } else {
            return 1 + numberOfSteps(num - 1);
        }
    }
};
