// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/disarium-number.html .

#include <string>

using namespace std;

string disariumNumber(int number) {
    string item = to_string(number);
    int sum = 0;
    for (int i = 0; i < item.size(); i++) {
        int prod = 1;
        int digit = item[i] - '0';
        if (digit > 0) {
            for (int j = 0; j < i + 1; j++) {
                prod *= digit;
            }
        }
        sum += prod;
    }
    return sum == number ? "Disarium !!" : "Not !!";
}

