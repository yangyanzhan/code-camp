// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/height-checker.html .

class Solution {
  public:
    int heightChecker(vector<int> &heights) {
        vector<int> new_heights{heights.begin(), heights.end()};
        sort(new_heights.begin(), new_heights.end());
        int res = 0;
        for (int i = 0; i < heights.size(); i++) {
            if (heights[i] != new_heights[i]) {
                res++;
            }
        }
        return res;
    }
};
