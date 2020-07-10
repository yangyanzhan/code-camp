// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/find-the-nth-digit-of-a-number.html .

#include <cmath>
#include <string>

int findDigit(int num, int nth) {
    using namespace std;
    if (nth <= 0) {
        return -1;
    }
    string item = to_string(abs(num));
    if (nth > item.size()) {
        return 0;
    }
    return item[item.size() - nth] - '0';
}
