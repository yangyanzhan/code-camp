// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/easy-wallpaper.html .

#include <algorithm>
#include <cmath>

using namespace std;

class Wallpaper {
  public:
    static string wallPaper(double l, double w, double h) {
        int c = ceil(2 * (h * w + h * l) * 1.15 / 5.2);
        if (l * w * h == 0) {
            c = 0;
        }
        return vector<string>{"zero",    "one",       "two",      "three",
                              "four",    "five",      "six",      "seven",
                              "eight",   "nine",      "ten",      "eleven",
                              "twelve",  "thirteen",  "fourteen", "fifteen",
                              "sixteen", "seventeen", "eighteen", "nineteen",
                              "twenty"}[c];
    }
};
