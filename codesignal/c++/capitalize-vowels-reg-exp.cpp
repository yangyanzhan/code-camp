// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/capitalize-vowels-reg-exp.html .

#include <regex>

std::string capitalizeVowelsRegExp(std::string input) {
    using namespace std;
    regex reg("[aeiouy]+", regex_constants::icase);
    for (auto it = sregex_iterator(input.begin(), input.end(), reg); it != sregex_iterator(); it++) {
        for (int i = 0; i < it->str().size(); i++) {
            int pos = i + it->position(0);
            input[pos] = toupper(input[pos]);
        }
    }
    return input;
}

