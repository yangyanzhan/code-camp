// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/container-with-most-water.html .

using namespace std;

class Solution {
  public:
    int maxArea(vector<int> &height) {
        int start = 0, end = height.size() - 1;
        int res = 0;
        while (start < end) {
            int h1 = height[start], h2 = height[end];
            int area = (end - start) * min(h1, h2);
            res = max(res, area);
            if (h1 <= h2) {
                start++;
            } else {
                end--;
            }
        }
        return res;
    }
};
