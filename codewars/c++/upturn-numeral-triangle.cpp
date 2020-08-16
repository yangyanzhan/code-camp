// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/upturn-numeral-triangle.html .

using namespace std;

std::string pattern(int n) {
    string res;
    for (int i = 0; i < n; i++) {
        string item;
        for (int j = 0; j < i; j++) {
            item += " ";
        }
        for (int j = 0; j < n - i; j++) {
            item += " " + to_string((i + 1) % 10);
        }
        item += "\n";
        res += item;
    }
    res = res.substr(0, res.size() - 1);
    return res;
}
