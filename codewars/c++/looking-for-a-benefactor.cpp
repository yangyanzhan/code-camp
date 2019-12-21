// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/looking-for-a-benefactor.html .

#include <cmath>
#include <vector>

class NewAverage {
public:
   static long long newAvg(std::vector<double> &arr, double navg) {
       using namespace std;
       double sum = 0;
       for (auto num: arr) {
           sum += num;
       }
       double res = navg * (arr.size() + 1) - sum;
       if (res < 0) {
           throw logic_error("less than zero");
       }
       return ceil(res);
   }
};

