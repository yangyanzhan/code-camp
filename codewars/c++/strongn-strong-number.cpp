// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/strongn-strong-number.html .

#include <string>

using namespace std;

string strong_num(int number) {
    auto item = to_string(number);
    int sum = 0;
    for (int i = 0; i < item.size(); i++) {
        int digit = item[i] - '0';
        int prod = 1;
        for (int j = 1; j <= digit; j++) {
            prod *= j;
        }
        sum += prod;
    }
    return number == sum ? "STRONG!!!!" : "Not Strong !!";
}

