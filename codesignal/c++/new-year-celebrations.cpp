// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/new-year-celebrations.html .

int newYearCelebrations(std::string takeOffTime, std::vector<int> minutes) {
    using namespace std;
    int minute = stoi(takeOffTime.substr(0, 2));
    int second = stoi(takeOffTime.substr(3, 2));
    int now = minute * 60 + second;
    bool start_with_new_year = now < 4 * 60;
    int day = 24 * 60;
    int res = 0;
    if (now % day == 0) {
        res++;
    }
    int pre = 0;
    for (auto minute : minutes) {
        for (int i = 1; i <= minute - pre; i++) {
            now++;
            if (now % day == 0) {
                res++;
            }
        }
        now -= 60;
        if (now % day == 0) {
            res++;
        }
        pre = minute;
    }
    if (start_with_new_year) {
        if (now < 0) {
            res++;
        }
    } else {
        if (now < day) {
            res++;
        }
    }
    return res;
}
