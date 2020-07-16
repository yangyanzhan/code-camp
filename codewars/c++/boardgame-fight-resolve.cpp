// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/boardgame-fight-resolve.html .

using namespace std;

#include <map>

char fightResolve(char defender, char attacker) {
    auto isUp1 = toupper(defender) == defender;
    auto isUp2 = toupper(attacker) == attacker;
    if (isUp1 == isUp2) {
        return -1;
    }
    map<char, map<char, bool>> cache;
    cache['k'] = {{'a', true}, {'p', false}, {'s', false}, {'k', false}};
    cache['s'] = {{'a', false}, {'p', true}, {'s', false}, {'k', false}};
    cache['a'] = {{'a', false}, {'p', false}, {'s', true}, {'k', false}};
    cache['p'] = {{'a', false}, {'p', false}, {'s', false}, {'k', true}};
    auto win = cache[tolower(defender)][tolower(attacker)];
    return win ? defender : attacker;
}
