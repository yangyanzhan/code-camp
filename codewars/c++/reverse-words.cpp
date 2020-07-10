// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/reverse-words.html .

#include <regex>

std::string reverse_words(std::string str) {
    using namespace std;
    regex reg("([^ ]+)|([ ]+)");
    string res;
    for (auto it = sregex_iterator(str.begin(), str.end(), reg);
         it != sregex_iterator(); it++) {
        string item = it->str();
        reverse(item.begin(), item.end());
        res += item;
    }
    return res;
}
