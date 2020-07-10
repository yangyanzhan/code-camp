// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/sum-of-the-first-nth-term-of-series.html .

#include <iomanip>
#include <sstream>

std::string seriesSum(int n) {
    using namespace std;
    double sum = 0, a = 1, b = 1;
    for (int i = 0; i < n; i++) {
        sum += a / b;
        b += 3;
    }
    stringstream ss;
    ss << fixed << setprecision(2) << sum;
    return ss.str();
}
