// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) {
            return "";
        }
        int max_len = 1;
        int res_i = 0;
        int res_j = 0;
        bool *palin_cache = new bool[n * n];
        for (int j = 0; j < n; j++) {
            palin_cache[j * n + j] = true;
            for (int i = 0; i < j; i++) {
                bool is_palin = false;
                if (i == j - 1) {
                    is_palin = s[i] == s[j];
                } else {
                    is_palin = s[i] == s[j] && palin_cache[(i + 1) * n + j - 1];
                }
                palin_cache[i * n + j] = is_palin;
                if (is_palin) {
                    int curr_len = j - i + 1;
                    if (curr_len > max_len) {
                        max_len = curr_len;
                        res_i = i;
                        res_j = j;
                    }
                }
            }
        }
        delete[] palin_cache;
        return s.substr(res_i, max_len);
    }
};
