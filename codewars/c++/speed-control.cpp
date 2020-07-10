// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/speed-control.html .

#include <algorithm>
#include <cmath>

class GpsSpeed {
  public:
    static int gps(int s, std::vector<double> &x) {
        using namespace std;
        int res = 0;
        for (int i = 1; i < x.size(); i++) {
            int v = floor((x[i] - x[i - 1]) * 3600.0 / s);
            res = max(res, v);
        }
        return res;
    }
};
