// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/unusual-lex-order.html .

std::vector<std::string> unusualLexOrder(std::vector<std::string> words) {
    using namespace std;
    sort(words.begin(), words.end(), [] (auto item1, auto item2) {
        string s1 = item1, s2 = item2;
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        return s1 < s2;
    });
    return words;
}

