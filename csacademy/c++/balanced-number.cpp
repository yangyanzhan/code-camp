// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/csacademy/balanced-number.html .

#include <iostream>

using namespace std;

int main() {
    string item;
    cin >> item;
    int cache[10] = {0};
    for (auto ch : item) {
        cache[ch - '0']++;
    }
    bool balanced = true;
    for (int i = 1; i < 10; i++) {
        if (cache[i] != cache[i - 1]) {
            balanced = false;
        }
    }
    cout << (balanced ? 1 : 0);
    return 0;
}
