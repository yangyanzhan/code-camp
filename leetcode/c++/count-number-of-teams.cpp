// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/count-number-of-teams.html .

class Solution {
public:
    int numTeams(vector<int>& rating) {
        int res = 0, n = rating.size();
        for (int i = 0; i < n; i++) {
            int l = 0, r = 0;
            for (int j = 0; j < i; j++) {
                if (rating[j] < rating[i]) {
                    l++;
                }
            }
            for (int j = i + 1; j < n; j++) {
                if (rating[i] < rating[j]) {
                    r++;
                }
            }
            res += l * r + (i - l) * (n - 1 - i - r);
        }
        return res;
    }
};

