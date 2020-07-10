// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/exercism/bob.html .

// bob.h

#include <string>

using namespace std;

class bob {
  public:
    static string hey(string in);
};

// bob.cpp

#include <regex>

#include "bob.h"

string bob::hey(string in) {
    string uppered;
    for (char ch : in) {
        uppered += toupper(ch);
    }
    bool hasAlpha = regex_match(uppered, regex(".*[A-Z].*"));
    if (hasAlpha && in == uppered) {
        return "Whoa, chill out!";
    }
    if (regex_match(in, regex(".*[?][ ]*"))) {
        return "Sure.";
    }
    if (regex_match(in, regex("[ ]*"))) {
        return "Fine. Be that way!";
    }
    return "Whatever.";
}
