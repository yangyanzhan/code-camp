// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/balanced-number.html .

#include <string>

using namespace std;

string balancedNum(unsigned long long int number) {
    auto item = to_string(number);
    int n = item.size();
    int s1 = 0, s2 = 0;
    int m = n % 2 != 0 ? n / 2 : (n - 2) / 2;
    for (int i = 0; i < m; i++) {
        s1 += item[i] - '0';
        s2 += item[n - 1 - i] - '0';
    }
    return s1 == s2 ? "Balanced" : "Not Balanced";
}
