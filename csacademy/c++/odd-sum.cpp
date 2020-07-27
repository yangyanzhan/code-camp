// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/odd-sum.html .

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int cache[2] = {0, 0};
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        cache[num % 2]++;
    }
    int res = cache[0] * cache[1];
    cout << res;
    return 0;
}
