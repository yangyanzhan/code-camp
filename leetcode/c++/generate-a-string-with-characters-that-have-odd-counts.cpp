// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/generate-a-string-with-characters-that-have-odd-counts.html .

class Solution {
public:
    string generateTheString(int n) {
        string res;
        for (int i = 0; i < n / 2 * 2; i++) {
            res += "a";
        }
        if (n % 2 != 0) {
            res += "a";
        } else {
            res[n - 1] = 'b';
        }
        return res;
    }
};

