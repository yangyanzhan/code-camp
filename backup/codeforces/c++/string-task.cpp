// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codeforces/string-task.html .

#include <string>
#include <iostream>

int main() {
    using namespace std;
    string item;
    cin >> item;
    string vowels = "aeiouyAEIOUY";
    string res;
    for (auto ch: item) {
        if (vowels.find(ch) == string::npos) {
            res += ".";
            res += tolower(ch);
        }
    }
    cout << res << endl;
    return 0;
}

