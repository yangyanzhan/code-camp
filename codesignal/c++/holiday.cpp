// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/holiday.html .

int holiday(int x, std::string weekDay, std::string month, int yearNumber) {
    using namespace std;
    vector<string> wdays = {"Sunday",   "Monday", "Tuesday", "Wednesday",
                            "Thursday", "Friday", "Saturday"};
    int t_wday;
    for (int i = 0; i < 7; i++) {
        if (weekDay == wdays[i]) {
            t_wday = i;
            break;
        }
    }
    int t_month;
    vector<string> months = {"January",   "February", "March",    "April",
                             "May",       "June",     "July",     "August",
                             "September", "October",  "November", "December"};
    for (int i = 0; i < 12; i++) {
        if (month == months[i]) {
            t_month = i;
            break;
        }
    }
    tm date;
    stringstream ss;
    ss << yearNumber << "-" << setw(2) << setfill('0') << (t_month + 1)
       << "-01 00:00:00";
    ss >> get_time(&date, "%Y-%m-%d %H:%M:%S");
    int res = 1, count = 0;
    while (true) {
        if (mktime(&date) == -1) {
            return -1;
        }
        if (date.tm_mon != t_month) {
            return -1;
        }
        if (date.tm_wday == t_wday) {
            count++;
            if (count == x) {
                break;
            }
        }
        date.tm_mday++;
        res++;
    }
    return res;
}
