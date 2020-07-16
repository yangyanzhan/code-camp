// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/happy-birthday-darling.html .

#include <sstream>
#include <string>

using namespace std;

std::string womens_age(unsigned n) {
    int base, age;
    if (n % 2 == 0) {
        base = n / 2;
        age = 20;
    } else {
        base = (n - 1) / 2;
        age = 21;
    }
    stringstream ss;
    ss << n << "? That's just " << age << ", in base " << base << "!";
    return ss.str();
}
