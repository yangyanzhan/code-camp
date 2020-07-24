// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/square-pi-s.html .

#include <cmath>
#include <iostream>
#include <list>

using namespace std;

int square_pi(int digits) {
    string pi = "31415926535897932384626433832795028841971693993751058209749445"
                "923078164062862089986280348253421170679";
    long long res = 0;
    for (int i = 0; i < digits; i++) {
        long long num = pi[i] - '0';
        res += num * num;
    }
    return ceil(sqrt(res));
}
