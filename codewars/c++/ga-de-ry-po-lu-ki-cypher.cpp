// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/ga-de-ry-po-lu-ki-cypher.html .

using namespace std;

#include <string>

std::string encode(const std::string &str) {
    string res = str;
    for (int i = 0; i < res.size(); i++) {
        auto ch = res[i];
        bool low = islower(ch);
        ch = tolower(ch);
        if (ch == 'g') {
            ch = 'a';
        } else if (ch == 'a') {
            ch = 'g';
        } else if (ch == 'd') {
            ch = 'e';
        } else if (ch == 'e') {
            ch = 'd';
        } else if (ch == 'r') {
            ch = 'y';
        } else if (ch == 'y') {
            ch = 'r';
        } else if (ch == 'p') {
            ch = 'o';
        } else if (ch == 'o') {
            ch = 'p';
        } else if (ch == 'l') {
            ch = 'u';
        } else if (ch == 'u') {
            ch = 'l';
        } else if (ch == 'k') {
            ch = 'i';
        } else if (ch == 'i') {
            ch = 'k';
        }
        if (!low) {
            ch = toupper(ch);
        }
        res[i] = ch;
    }
    return res;
}

std::string decode(const std::string &str) { return encode(str); }
