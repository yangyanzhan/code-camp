// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/return-pyramids.html .

#include <sstream>

using namespace std;

std::string pyramid(int n) {
    stringstream ss;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            ss << " ";
        }
        ss << "/";
        auto item = i < n - 1 ? " " : "_";
        for (int j = 0; j < 2 * i; j++) {
            ss << item;
        }
        ss << "\\\n";
    }
    return ss.str();
}
