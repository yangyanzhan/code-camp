// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/compare-strings-by-sum-of-chars.html .

using namespace std;

bool compare(std::string s1, std::string s2) {
    int sum1 = 0;
    for (auto ch : s1) {
        if (!isalpha(ch)) {
            sum1 = 0;
            break;
        }
        ch = toupper(ch);
        sum1 += ch;
    }
    int sum2 = 0;
    for (auto ch : s2) {
        if (!isalpha(ch)) {
            sum2 = 0;
            break;
        }
        ch = toupper(ch);
        sum2 += ch;
    }
    return sum1 == sum2;
}
