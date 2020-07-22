// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/simple-string-characters.html .

using namespace std;

std::vector<int> solve(std::string s) {
    int a = 0, b = 0, c = 0, d = 0;
    for (auto ch : s) {
        if (isalnum(ch)) {
            if (isdigit(ch)) {
                c++;
            } else {
                if (ch == toupper(ch)) {
                    a++;
                } else if (ch == tolower(ch)) {
                    b++;
                }
            }
        } else {
            d++;
        }
    }
    return {a, b, c, d};
}
