// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/subtract-the-product-and-sum-of-digits-of-an-integer.html .

class Solution {
public:
    int subtractProductAndSum(int n) {
        auto item = to_string(n);
        int prod = 1, sum = 0;
        for (auto &ch: item) {
            int num = ch - '0';
            prod *= num;
            sum += num;
        }
        return prod - sum;
    }
};

