// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/driving-licence.html .

#include <array>
#include <sstream>

using namespace std;

string driver(const array<string, 5> &data) {
    auto forename = data[0];
    auto middlename = data[1];
    auto surname = data[2];
    auto date = data[3];
    int idx1 = date.find("-");
    int idx2 = date.find("-", idx1 + 1);
    auto day = date.substr(0, idx1);
    auto month_name = date.substr(idx1 + 1, idx2 - idx1 - 1);
    auto year = date.substr(idx2 + 1);
    auto is_female = data[4] == "F";
    vector<string> monthes1 = {"January",   "February", "March",    "April",
                               "May",       "June",     "July",     "August",
                               "September", "October",  "November", "December"};
    vector<string> monthes2 = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                               "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int month = distance(monthes1.begin(),
                         find(monthes1.begin(), monthes1.end(), month_name));
    if (month == monthes1.size()) {
        month = distance(monthes2.begin(),
                         find(monthes2.begin(), monthes2.end(), month_name));
    }
    month++;
    stringstream ss;
    for (int i = 0; i < 5; i++) {
        if (i < surname.size()) {
            ss << (char)toupper(surname[i]);
        } else {
            ss << 9;
        }
    }
    ss << year[2];
    int m1 = month / 10;
    int m2 = month % 10;
    ss << (is_female ? (m1 + 5) : m1);
    ss << m2;
    ss << day;
    ss << year[3];
    ss << (char)toupper(forename[0]);
    ss << (char)(middlename.size() > 0 ? toupper(middlename[0]) : '9');
    ss << "9AA";
    return ss.str();
}
