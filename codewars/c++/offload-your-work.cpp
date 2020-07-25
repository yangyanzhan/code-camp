// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/offload-your-work.html .

#include <sstream>

using namespace std;

std::string workNeeded(int projectMinutes,
                       std::vector<std::pair<int, int>> freelancers) {
    int p = projectMinutes;
    for (auto lancer : freelancers) {
        int m = get<0>(lancer) * 60 + get<1>(lancer);
        if (p <= m) {
            return "Easy Money!";
        }
        p -= m;
    }
    stringstream ss;
    int h = p / 60;
    int m = p % 60;
    ss << "I need to work " << h << " hour(s) and " << m << " minute(s)";
    return ss.str();
}
