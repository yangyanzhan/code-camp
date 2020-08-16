// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/cryptanalysis-word-patterns.html .

using namespace std;

std::string wordPattern(const std::string &word) {
    string res;
    char pre = '\0';
    int c = 0;
    vector<int> rs(26, -1);
    for (auto ch : word) {
        ch = tolower(ch);
        int pos = ch - 'a';
        if (rs[pos] == -1) {
            rs[pos] = c;
            c++;
        }
        res += to_string(rs[pos]) + ".";
    }
    res = res.substr(0, res.size() - 1);
    return res;
}
