// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/proper-noun-correction.html .

std::string properNounCorrection(std::string noun) {
    using namespace std;
    string res;
    for (int i = 0; i < noun.size(); i++) {
        if (i == 0) {
            res += toupper(noun[i]);
        } else {
            res += tolower(noun[i]);
        }
    }
    return res;
}

