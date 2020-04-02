// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/self-dividing-numbers.html .

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for (int num = left; num <= right; num++) {
            auto item = to_string(num);
            bool valid = true;
            for (auto &ch: item) {
                int digit = ch - '0';
                if (digit != 0 && num % digit == 0) {
                } else {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                res.push_back(num);
            }
        }
        return res;
    }
};

