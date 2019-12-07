// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/last-digit-reg-exp.html .

char lastDigitRegExp(std::string inputString) {
    using namespace std;
    reverse(inputString.begin(), inputString.end());
    for (auto ch: inputString) {
        if ('0' <= ch && ch <= '9') {
            return ch;
        }
    }
    return '\0';
}

