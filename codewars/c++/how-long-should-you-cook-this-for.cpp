// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/how-long-should-you-cook-this-for.html .

using namespace std;

#include <cmath>
#include <sstream>

string cookingTime(const string &neededPower, int minutes, int seconds,
                   const string &power) {
    double np = stod(neededPower.substr(0, neededPower.size() - 1));
    double p = stod(power.substr(0, power.size() - 1));
    double r = minutes * 60 + seconds;
    r *= np / p;
    if (r - floor(r) <= 0.001) {
        r = floor(r);
    } else {
        r = ceil(r);
    }
    int m = (int)r / 60;
    int s = (int)r % 60;
    stringstream ss;
    ss << m << " minutes " << s << " seconds";
    return ss.str();
}
