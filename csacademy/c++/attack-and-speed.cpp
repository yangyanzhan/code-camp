// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/attack-and-speed.html .

#include <iostream>

using namespace std;

int main() {
    long long a, s, k, x, y;
    cin >> a >> s >> k >> x >> y;
    long long m1 = s + k * y - a;
    long long m2 = x + y;
    if (m1 % m2 != 0) {
        cout << -1;
    } else {
        cout << (m1 / m2);
    }
    return 0;
}
