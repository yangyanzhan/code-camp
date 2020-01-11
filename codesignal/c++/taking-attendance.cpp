// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/taking-attendance.html .

int takingAttendance(std::vector<std::string> classList) {
    using namespace std;
    int res = 5 * classList.size();
    for (auto name: classList) {
        regex reg("[^aeiouyAEIOUY]+");
        for (auto it = sregex_iterator(name.begin(), name.end(), reg); it != sregex_iterator(); it++) {
            res += pow(2, it->str().size() - 1);
        }
    }
    return res;
}

