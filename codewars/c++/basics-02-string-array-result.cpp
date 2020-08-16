// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/basics-02-string-array-result.html .

using namespace std;

#include <cmath>
#include <numeric>
#include <regex>

std::string calculateArray(const std::string &str) {
    auto regex = std::regex{R"((?:^|;)([+-]?\d+)(?=;|$))"};
    auto begin = std::sregex_iterator(str.begin(), str.end(), regex);
    auto end = std::sregex_iterator();
    int mean = std::round(
        1.0 *
        std::accumulate(begin, end, 0,
                        [](auto a, auto b) { return a + std::stoi(b[1]); }) /
        std::distance(begin, end));
    auto sumOfDigits = 0;
    for (auto n = mean; n; n /= 10)
        sumOfDigits += n % 10;
    auto divisibleBy5 = (sumOfDigits % 5 == 0);
    std::ostringstream out;
    out << mean << ',' << sumOfDigits << ','
        << (divisibleBy5 ? "TRUE" : "FALSE");
    return out.str();
}
