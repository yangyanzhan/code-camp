// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/turkish-numbers-0-99.html .

using namespace std;

#include <string>

std::string getTurkishNumber(unsigned int n) {
    vector<string> digits = {"sıfır", "bir",  "iki",  "üç",    "dört",
                             "beş",   "altı", "yedi", "sekiz", "dokuz"};
    vector<string> tens = {"on",     "yirmi",  "otuz",   "kırk",  "elli",
                           "altmış", "yetmiş", "seksen", "doksan"};
    if (n < 10) {
        return digits[n];
    }
    string res = tens[n / 10 - 1];
    if (n % 10 != 0) {
        res += " " + digits[n % 10];
    }
    return res;
}
