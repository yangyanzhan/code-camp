// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/remove-duplicate-words.html .

#include <set>
#include <string>

std::string removeDuplicateWords(const std::string &str_input) {
    using namespace std;
    int pre = 0, now = 0;
    string str = str_input + " ";
    set<string> items;
    string res;
    while ((now = str.find(' ', pre + 1)) != string::npos) {
        auto item = str.substr(pre, now - pre);
        if (items.find(item) == items.end()) {
            items.insert(item);
            res += item + " ";
        }
        pre = now + 1;
    }
    res = res.substr(0, res.size() - 1);
    return res;
}
