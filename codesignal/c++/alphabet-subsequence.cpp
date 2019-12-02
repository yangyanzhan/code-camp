// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/alphabet-subsequence.html .

bool alphabetSubsequence(std::string s) {
    using namespace std;
    char pre = s[0];
    if (pre < 'a' || pre > 'z') {
        return false;
    }
    for (int i = 1; i < s.size(); i++) {
        char ch = s[i];
        if (ch < 'a' || ch > 'z') {
            return false;
        }
        if (ch <= pre) {
            return false;
        }
        pre = ch;
    }
    return true;
}

