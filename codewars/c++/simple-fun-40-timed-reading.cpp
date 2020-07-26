// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/simple-fun-40-timed-reading.html .

#include <chrono>

using namespace std;

int timed_reading(int maxLength, const std::string &text) {
    int res = 0;
    int pre = -1;
    for (int i = 0; i < text.size(); i++) {
        if (isalpha(text[i])) {
            if (pre == -1) {
                pre = i;
            }
        }
        if (pre != -1) {
            int len = 0;
            if (!isalpha(text[i])) {
                len = i - pre;
            } else if (i == text.size() - 1) {
                len = i - pre + 1;
            }
            if (len > 0) {
                if (len <= maxLength) {
                    res++;
                }
                pre = -1;
            }
        }
    }
    return res;
}
