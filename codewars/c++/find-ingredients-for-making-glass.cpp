// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/find-ingredients-for-making-glass.html .

using namespace std;

#include <iomanip>
#include <sstream>
#include <string>

string createIngredients(double sand = 0, double seaweed = 0,
                         double chalk = 0) {
    if (sand < 0 || seaweed < 0 || chalk < 0) {
        return "";
    }
    if (sand > 0) {
        seaweed = sand * 3;
        chalk = sand / 12;
    } else if (seaweed > 0) {
        sand = seaweed / 3;
        chalk = seaweed / 36;
    } else if (chalk > 0) {
        sand = chalk * 12;
        seaweed = chalk * 36;
    } else {
        sand = 60;
        seaweed = 180;
        chalk = 5;
    }
    stringstream ss;
    ss << fixed << setprecision(2) << "[" << sand << ";" << seaweed << ";"
       << chalk << "]";
    return ss.str();
}
