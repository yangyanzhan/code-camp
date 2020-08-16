// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/sum-and-length.html .

using namespace std;

#include <vector>

std::string sumLength(std::vector<int> input) {
    int a = 0, b = 0, c = 0;
    for (auto num : input) {
        if (num > 0) {
            a += num;
        } else if (num < 0) {
            b++;
        } else {
            c++;
            if (c % 2 == 1) {
                b++;
            }
        }
    }
    return to_string(a) + " " + to_string(b);
}
