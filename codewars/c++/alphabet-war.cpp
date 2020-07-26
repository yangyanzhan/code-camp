// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/alphabet-war.html .

#include <string>
using namespace std;

string alphabetWar(string fight) {
    int n1 = 0, n2 = 0;
    string item1 = "sbpw";
    string item2 = "zdqm";
    for (auto chr : fight) {
        string ch = {chr};
        if (item1.find(ch) != string::npos) {
            n1 += item1.find(ch) + 1;
        }
        if (item2.find(ch) != string::npos) {
            n2 += item2.find(ch) + 1;
        }
    }
    if (n1 < n2) {
        return "Right side wins!";
    } else if (n1 > n2) {
        return "Left side wins!";
    }
    return "Let's fight again!";
}
