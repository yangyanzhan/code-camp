// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/longest-palindromic-substring.html .

using namespace std;

class Solution {
  public:
    string longestPalindrome(string s) {
        string res;
        int n = s.size();
        if (n <= 0) {
            return res;
        }
        res = s.substr(0, 1);
        vector<vector<int>> cache(n);
        for (int i = 0; i < n; i++) {
            cache[i] = vector<int>(n, 0);
            cache[i][i] = 1;
        }
        for (int len = 2; len <= n; len++) {
            for (int i = 0; i < n; i++) {
                int j = i + len - 1;
                if (j >= n) {
                    break;
                }
                if (s[i] == s[j]) {
                    if (i + 1 <= j - 1) {
                        cache[i][j] = cache[i + 1][j - 1];
                    } else {
                        cache[i][j] = 1;
                    }
                }
                if (cache[i][j] == 1) {
                    if (j - i + 1 > res.size()) {
                        res = s.substr(i, j - i + 1);
                    }
                }
            }
        }
        return res;
    }
};
