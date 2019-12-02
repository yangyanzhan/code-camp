// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/stolen-lunch.html .

std::string stolenLunch(std::string note) {
    using namespace std;
    for (auto &ch: note) {
        if ('0' <= ch && ch <= '9') {
            ch = 'a' + ch - '0';
        } else if ('a' <= ch && ch <= 'a' + 9) {
            ch = '0' + ch - 'a';
        }
    }
    return note;
}

