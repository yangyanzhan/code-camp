// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/timed-reading.html .

int timedReading(int maxLength, std::string text) {
    using namespace std;
    int res = 0;
    string word = "";
    text += ".";
    for (auto ch : text) {
        ch = tolower(ch);
        if (ch < 'a' || ch > 'z') {
            if (word.size() > 0 && word.size() <= maxLength) {
                res++;
            }
            word = "";
        } else {
            word += ch;
        }
    }
    return res;
}
