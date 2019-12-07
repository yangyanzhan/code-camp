// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/case-unification.html .

std::string caseUnification(std::string inputString) {
    using namespace std;
    int lc = 0, uc = 0;
    string lres = "", ures = "";
    for (auto ch: inputString) {
        lres += tolower(ch);
        ures += toupper(ch);
        if (ch == tolower(ch)) {
            lc++;
        } else {
            uc++;
        }
    }
    if (lc > uc) {
        return lres;
    }
    return ures;
}

