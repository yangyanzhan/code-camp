// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/whose-move.html .

std::string whoseMove(std::string lastPlayer, bool win) {
    using namespace std;
    vector<string> players{"white", "black"};
    int idx = distance(players.begin(),
                       find(players.begin(), players.end(), lastPlayer));
    return win ? lastPlayer : players[(idx + 1) % 2];
}
