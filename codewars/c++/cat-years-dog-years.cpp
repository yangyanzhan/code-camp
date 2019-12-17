// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/cat-years-dog-years.html .

#include <vector>

std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
    using namespace std;
    int h = humanYears;
    int d = 15;
    if (h >= 2) {
        d += 9;
    }
    d += max(0, h - 2) * 4;
    int c = 15;
    if (h >= 2) {
        c += 9;
    }
    c += max(0, h - 2) * 5;
    return {h, d, c};
}
