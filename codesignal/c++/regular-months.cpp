// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/regular-months.html .

std::string regularMonths(std::string currMonth) {
    using namespace std;
    tm date;
    stringstream ss("01-" + currMonth + " 00:00:00");
    ss >> get_time(&date, "%d-%m-%Y %H:%M:%S");
    while (true) {
        if (date.tm_mon == 11) {
            date.tm_year++;
            date.tm_mon = 0;
        } else {
            date.tm_mon++;
        }
        mktime(&date);
        if (date.tm_wday == 1) {
            break;
        }
    }
    ss.str("");
    ss.clear();
    ss << put_time(&date, "%m-%Y");
    return ss.str();
}
