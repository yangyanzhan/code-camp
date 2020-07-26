// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/div-3.html .

#include <iostream>

using namespace std;

int main() {
    long long x;
    cin >> x;
    int res = 0;
    while (x != 1) {
        if (x == 2) {
            x--;
        } else if (x % 3 == 0) {
            x /= 3;
        } else if (x % 3 == 1) {
            x--;
        } else {
            x++;
        }
        res++;
    }
    cout << res;
    return 0;
}
