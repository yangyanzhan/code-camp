// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/alternate-capitalization.html .

#include <string>
#include <utility>

using namespace std;

std::pair<std::string, std::string> capitalize(const std::string &s) {
    string a = s;
    string b = s;
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) {
            a[i] = toupper(a[i]);
            b[i] = tolower(b[i]);
        } else {
            a[i] = tolower(a[i]);
            b[i] = toupper(b[i]);
        }
    }
    return {a, b};
}
