// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/complete-the-pattern-4.html .

std::string pattern(int n) {
    using namespace std;
    if (n <= 0) {
        return "";
    }
    string pattern;
    string item;
    for (int i = 1; i <= n; i++) {
        item += to_string(i);
    }
    int len = item.size();
    for (int i = 0; i < n; i++) {
        pattern += item.substr(i);
        if (i != n - 1) {
            pattern += "\n";
        }
    }
    return pattern;
}

