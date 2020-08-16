// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/weird-words.html .

using namespace std;

std::string nextLetter(std::string str) {
    for (auto &ch : str) {
        if (isalpha(ch)) {
            if (islower(ch)) {
                ch = (ch - 'a' + 1) % 26 + 'a';
            } else {
                ch = (ch - 'A' + 1) % 26 + 'A';
            }
        }
    }
    return str;
}
