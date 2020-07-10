// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/delete-columns-to-make-sorted.html .

class Solution {
  public:
    int minDeletionSize(vector<string> &A) {
        int m = A.size(), n = A[0].size();
        int res = 0;
        for (int j = 0; j < n; j++) {
            int pre = numeric_limits<int>::min();
            for (int i = 0; i < m; i++) {
                int now = A[i][j];
                if (pre > now) {
                    res++;
                    break;
                } else {
                    pre = now;
                }
            }
        }
        return res;
    }
};
