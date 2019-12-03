// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/parking-cost.html .

#include <regex>

std::vector<int> split(std::string time) {
    using namespace std;
    regex reg("(\\d+):(\\d+)");
    smatch matches;
    regex_search(time, matches, reg);
    return {stoi(matches[1].str()), stoi(matches[2].str())};
}

int parkingCost(std::string timeIn, std::string timeOut) {
    using namespace std;
    auto parts = split(timeIn);
    int h1 = parts[0], m1 = parts[1];
    parts = split(timeOut);
    int h2 = parts[0], m2 = parts[1];
    int dm = (h2 - h1) * 60 + m2 - m1;
    int cost = 0;
    int dm1 = min(dm, 2 * 60);
    if (dm1 > 30) {
        cost += (int)ceil((dm1 - 30) / 10.0);
    }
    if (dm > 2 * 60) {
        cost += (int)ceil((dm - 2 * 60) / 10.0) * 2;
    }
    return cost;
}
