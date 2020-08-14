// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/how-many-unique-consonants.html .

using namespace std;

#include <set>
#include <string>

unsigned int countConsonants(const std::string &str) {
    set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int res = 0;
    vector<int> cnts(26, 0);
    for (auto ch : str) {
        ch = tolower(ch);
        int pos = ch - 'a';
        if (0 <= pos && pos < 26) {
            cnts[pos]++;
        }
    }
    for (int i = 0; i < 26; i++) {
        char ch = 'a' + i;
        if (vowels.find(ch) == vowels.end() && cnts[i] >= 1) {
            res++;
        }
    }
    return res;
}
