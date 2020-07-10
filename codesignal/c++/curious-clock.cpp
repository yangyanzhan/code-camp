// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/curious-clock.html .

std::time_t strtot(std::string str) {
    using namespace std;
    tm date;
    stringstream ss(str + ":00");
    ss >> get_time(&date, "%Y-%m-%d %H:%M:%S");
    auto time = mktime(&date);
    return time;
}

std::string curiousClock(std::string someTime, std::string leavingTime) {
    using namespace std;
    auto time1 = strtot(someTime);
    auto time2 = strtot(leavingTime);
    auto time3 = time1 - (time2 - time1);

    char cache[100];
    tm *date = localtime(&time3);
    strftime(cache, 100, "%Y-%m-%d %H:%M", date);

    string res{cache};
    return res;
}
