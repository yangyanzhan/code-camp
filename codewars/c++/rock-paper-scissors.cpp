// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/rock-paper-scissors.html .

#include <string>

std::string rps(const std::string &p1, const std::string &p2) {
    using namespace std;
    vector<string> ops{"rock", "scissors", "paper"};
    int idx1 = 0, idx2 = 0;
    for (int i = 0; i < 3; i++) {
        if (ops[i] == p1) {
            idx1 = i;
            break;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (ops[i] == p2) {
            idx2 = i;
            break;
        }
    }
    if (idx1 == 0 && idx2 == 2) {
        return "Player 2 won!";
    }
    if (idx1 == 2 && idx2 == 0) {
        return "Player 1 won!";
    }
    if (idx1 < idx2) {
        return "Player 1 won!";
    }
    if (idx1 > idx2) {
        return "Player 2 won!";
    }
    return "Draw!";
}
