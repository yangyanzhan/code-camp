// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/duck-shoot-easy-version.html .

using namespace std;

#include <string>

std::string duckShoot(int ammo, double aim, std::string ducks) {
    ammo *= aim;
    for (int i = 0; i < ducks.size(); i++) {
        if (ducks[i] == '2') {
            if (ammo > 0) {
                ducks[i] = 'X';
                ammo--;
            }
        }
    }
    return ducks;
}
