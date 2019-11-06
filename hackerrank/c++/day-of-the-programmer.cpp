// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

string dayOfProgrammer(int year) {
    vector<int> days_of_month = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int remains = 256;
    int month = 0, day = 0;
    bool is_lunar;
    if (year < 1918) {
        is_lunar = year % 4 == 0;
    } else {
        is_lunar = (year % 400 == 0) || (year % 100 != 0 && year % 4 == 0);
    }
    if (is_lunar) {
        days_of_month[2] = 29;
    }
    if (year == 1918) {
        days_of_month[2] = 15;
    }
    for (int i = 1; i <= 12; i++) {
        if (remains <= days_of_month[i]) {
            month = i;
            day = remains;
            break;
        }
        remains -= days_of_month[i];
    }
    char buffer[11];
    sprintf(buffer, "%02d.%02d.%04d", day, month, year);
    return buffer;
}
