// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/basic-math-add-or-subtract.html .

#include <regex>

std::string calculate(std::string str) {
    using namespace std;
    regex reg("^(-?\\d+)(plus|minus)(-?\\d+)");
    smatch matches;
    while (regex_search(str, matches, reg)) {
        int n1 = stoi(matches[1].str());
        int n2 = stoi(matches[3].str());
        string op = matches[2].str();
        int n;
        if (op == "plus") {
            n = n1 + n2;
        } else {
            n = n1 - n2;
        }
        string tmp = to_string(n);
        tmp += matches.suffix();
        str = tmp;
    }
    return str;
}
