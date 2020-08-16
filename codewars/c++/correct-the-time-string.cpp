// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/correct-the-time-string.html .

using namespace std;

#include <iomanip>
#include <sstream>

std::string correct(std::string timeString) {
    bool v1 = isdigit(timeString[0]);
    bool v2 = isdigit(timeString[1]);
    bool v3 = timeString[2] == ':';
    bool v4 = isdigit(timeString[3]);
    bool v5 = isdigit(timeString[4]);
    bool v6 = timeString[5] == ':';
    bool v7 = isdigit(timeString[6]);
    bool v8 = isdigit(timeString[7]);
    if (!v1 || !v2 || !v3 || !v4 || !v5 || !v6 || !v7 || !v8) {
        return "";
    }
    int a = stoi(timeString.substr(0, 2));
    int b = stoi(timeString.substr(3, 2));
    int c = stoi(timeString.substr(6, 2));
    b += c / 60;
    c %= 60;
    a += b / 60;
    b %= 60;
    a %= 24;
    stringstream ss;
    ss << setw(2) << setfill('0');
    ss << a << ":";
    ss << setw(2) << setfill('0');
    ss << b << ":";
    ss << setw(2) << setfill('0');
    ss << c;
    return ss.str();
}
