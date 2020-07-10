// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/sort-array-by-parity-ii.html .

class Solution {
  public:
    vector<int> sortArrayByParityII(vector<int> &A) {
        int n = A.size();
        vector<int> res(n, 0);
        int i = 0, j = 0;
        for (auto num : A) {
            if (num % 2 == 0) {
                res[2 * i++] = num;
            } else {
                res[2 * j++ + 1] = num;
            }
        }
        return res;
    }
};
