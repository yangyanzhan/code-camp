// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/fibonacci-secret.html .

#include <algorithm>

std::string FibonacciSecret(std::string message) {
    using namespace std;
    string words;
    for (int i = 0; i < message.length(); i++) {
        if (!isspace(message[i])) {
            words += message[i];
        }
    }
    int a = 0, b = 1;
    string res;
    while (a < words.length()) {
        res += toupper(words[a]);
        res += "-";
        b = a + b;
        a = b - a;
    }
    if (res.length() > 0) {
        res = res.substr(0, res.length() - 1);
    }
    return res;
}
