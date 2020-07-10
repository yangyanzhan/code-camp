// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/day-of-week.html .

int wday(int year, int month, int day) {
    using namespace std;
    tm time;
    time.tm_year = year - 1900;
    time.tm_mon = month - 1;
    time.tm_mday = day;
    mktime(&time);
    return time.tm_wday;
}

int dayOfWeek(std::string birthdayDate) {
    using namespace std;
    int month = stoi(birthdayDate.substr(0, 2));
    int day = stoi(birthdayDate.substr(3, 2));
    int year = stoi(birthdayDate.substr(6, 4));
    int wday1 = wday(year, month, day);
    int offset = (month == 2 && day == 29) ? 4 : 1;
    int new_year = year;
    while (true) {
        new_year += offset;
        if (offset == 4) {
            if (new_year % 400 == 0 ||
                (new_year % 100 != 0 && new_year % 4 == 0)) {
            } else {
                continue;
            }
        }
        int wday2 = wday(new_year, month, day);
        if (wday2 == wday1) {
            break;
        }
    }
    return new_year - year;
}
