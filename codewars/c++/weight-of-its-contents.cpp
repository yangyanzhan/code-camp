// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/weight-of-its-contents.html .

#include <cmath>
#include <string>

using namespace std;

int content_weight(int bottle_weight, string scale) {
    int idx1 = scale.find(' '), idx2 = scale.find(' ', idx1 + 1);
    double num = stoi(scale.substr(0, idx1));
    string word = scale.substr(idx2 + 1);
    double ratio;
    if (word == "larger") {
        ratio = num / (num + 1);
    } else {
        ratio = (1 / num) / ((1 / num) + 1);
    }
    return round(bottle_weight * ratio);
}

