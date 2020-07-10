// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/minimum-time-visiting-all-points.html .

class Solution {
  public:
    int minTimeToVisitAllPoints(vector<vector<int>> &points) {
        int res = 0;
        int x = points[0][0], y = points[0][1];
        for (int i = 1; i < points.size(); i++) {
            int x1 = points[i][0], y1 = points[i][1];
            int dx = abs(x1 - x);
            int dy = abs(y1 - y);
            res += min(dx, dy) + abs(dx - dy);
            x = x1;
            y = y1;
        }
        return res;
    }
};
