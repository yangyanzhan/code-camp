// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/cyclical-permutation.html .

std::string pattern(int n) {
    using namespace std;
    if (n <= 0) {
        return "";
    }
    string res;
    for (int i = 1; i <= n; i++) {
        string item;
        for (int j = i; j <= n; j++) {
            item += to_string(j);
        }
        for (int j = 1; j < i; j++) {
            item += to_string(j);
        }
        res += item + (i == n ? "" : "\n");
    }
    return res;
}
