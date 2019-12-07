// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/is-lucky.html .

int sum(std::string str) {
    int res = 0;
    for (int i = 0; i < str.size(); i++) {
        res += str[i] - '0';
    }
    return res;
}

bool isLucky(int n) {
    std::string str = std::to_string(n);
    return sum(str.substr(0, str.size() / 2)) == sum(str.substr(str.size() / 2));
}
