// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/missed-classes.html .

int missedClasses(int year, std::vector<int> daysOfTheWeek,
                  std::vector<std::string> holidays) {
    using namespace std;
    set<int> cache;
    for (auto num : daysOfTheWeek) {
        cache.insert(num % 7);
    }
    int res = 0;
    for (auto holiday : holidays) {
        string time = to_string(year) + "-" + holiday + " 00:00:00";
        tm date;
        stringstream ss(time);
        ss >> get_time(&date, "%Y-%m-%d %H:%M:%S");
        mktime(&date);
        if (date.tm_mon < 8) {
            date.tm_year++;
            mktime(&date);
        }
        int wday = date.tm_wday;
        if (cache.find(wday) != cache.end()) {
            res++;
        }
    }
    return res;
}
