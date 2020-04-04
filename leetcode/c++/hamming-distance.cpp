// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/hamming-distance.html .

class Solution {
    vector<int> to_binary(int num) {
        vector<int> res;
        while (num > 0) {
            int digit = num % 2;
            res.push_back(digit);
            num /= 2;
        }
        return res;
    }
public:
    int hammingDistance(int x, int y) {
        auto digits1 = to_binary(x);
        auto digits2 = to_binary(y);
        int m = digits1.size(), n = digits2.size();
        int res = 0, i;
        for (i = 0; i < min(m, n); i++) {
            if (digits1[i] != digits2[i]) {
                res++;
            }
        }
        for (; i < m; i++) {
            if (digits1[i] != 0) {
                res++;
            }
        }
        for (; i < n; i++) {
            if (digits2[i] != 0) {
                res++;
            }
        }
        return res;
    }
};

