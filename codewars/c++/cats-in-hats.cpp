// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/cats-in-hats.html .

using namespace std;

#include <iomanip>
#include <sstream>

class Kata {
  public:
    std::string height(int n) {
        double h = 2000000;
        double res = h;
        for (int i = 1; i <= n; i++) {
            h /= 2.5;
            res += h;
        }
        stringstream ss;
        ss << fixed << setprecision(3) << res;
        return ss.str();
    }
};
