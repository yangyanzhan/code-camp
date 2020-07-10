// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/integer-to-string-of-fixed-width.html .

std::string integerToStringOfFixedWidth(int number, int width) {
    using namespace std;
    string res = to_string(number);
    if (width <= res.size()) {
        return res.substr(res.size() - width);
    } else {
        while (res.size() < width) {
            res = "0" + res;
        }
        return res;
    }
}
