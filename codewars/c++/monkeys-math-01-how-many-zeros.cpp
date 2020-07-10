// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/monkeys-math-01-how-many-zeros.html .

#include <regex>

int countZero(std::string s) {
    using namespace std;
    int res = 0;
    string item1 = "abdegopq069DOPQR";
    string item2 = "%&B8";
    for (auto ch : s) {
        if (item1.find(ch) != string::npos) {
            res++;
        }
        if (item2.find(ch) != string::npos) {
            res += 2;
        }
    }
    regex reg("\\(\\)");
    res +=
        distance(sregex_iterator(s.begin(), s.end(), reg), sregex_iterator());
    return res;
}
