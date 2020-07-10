// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/look-and-say-sequence-next-element.html .

std::string lookAndSaySequenceNextElement(std::string element) {
    using namespace std;
    element += " ";
    char pre = ' ';
    int count = 0;
    string res = "";
    for (auto ch : element) {
        if (ch == pre) {
            count++;
        } else {
            if (count != 0) {
                res += to_string(count) + pre;
            }
            pre = ch;
            count = 1;
        }
    }
    return res;
}
