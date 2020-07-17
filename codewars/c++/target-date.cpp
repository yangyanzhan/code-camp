// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/target-date.html .

#include <cmath>
#include <ctime>

using namespace std;

class DateDays {
  public:
    static std::string dateNbDays(double a0, double a, double p) {
        int day = ceil(log(a / a0) / log(p / 36000 + 1));
        tm time = {};
        strptime("2016-01-01", "%Y-%m-%d", &time);
        time.tm_mday += day;
        mktime(&time);
        char buffer[100];
        strftime(buffer, 100, "%Y-%m-%d", &time);
        return string(buffer);
    }
};
