// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/3-divisible-pairs.html .

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long cache[3] = {0, 0, 0};
    for (int i = 0; i < n; i++) {
        long long num;
        cin >> num;
        cache[num % 3]++;
    }
    long long res = cache[0] * (cache[0] - 1) / 2 + cache[1] * cache[2];
    cout << res;
    return 0;
}
