// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/dashes.html .

std::string item(int n, int len) {
    using namespace std;
    string res;
    for (int i = 1; i < n; i++) {
        res += "-|";
    }
    res += "-";
    while (res.size() < len) {
        res = " " + res + " ";
    }
    return res;
}

std::vector<std::string> dashes(int n) {
    using namespace std;
    vector<string> res;
    int len = 2 * n - 1;
    for (int i = 1; i < n; i++) {
        res.push_back(item(i, len));
    }
    res.push_back(item(n, len));
    for (int i = n - 1; i >= 1; i--) {
        res.push_back(item(i, len));
    }
    return res;
}

