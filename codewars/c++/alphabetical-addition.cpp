// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/alphabetical-addition.html .

#include <vector>

char add_letters(std::vector<char> letters) {
    using namespace std;
    if (letters.size() == 0) {
        return 'z';
    }
    char res = 0;
    for (auto ch: letters) {
        res += ch - 'a' + 1;
        if (res > 26) {
            res %= 26;
        }
    }
    return 'a' + res - 1;
}

