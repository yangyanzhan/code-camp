// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/histogram-h1.html .

#include <sstream>

using namespace std;

std::string histogram(std::vector<int> results) {
    stringstream ss;
    for (int i = results.size() - 1; i >= 0; i--) {
        ss << (i + 1) << "|";
        int n = results[i];
        for (int j = 0; j < n; j++) {
            ss << "#";
        }
        if (n > 0) {
            ss << " " << n;
        }
        ss << "\n";
    }
    return ss.str();
}
