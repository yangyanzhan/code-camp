// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/how-many-sundays.html .

int howManySundays(int n, std::string startDay) {
    using namespace std;
    vector<string> days = {"Sunday",   "Monday", "Tuesday", "Wednesday",
                           "Thursday", "Friday", "Saturday"};
    int a = distance(days.begin(), find(days.begin(), days.end(), startDay));
    int b = a + n;
    int a1 = a / 7;
    int b1 = b / 7;
    return b1 - a1;
}
