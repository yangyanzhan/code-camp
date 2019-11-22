// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/misere-nim.html .

string misereNim(vector<int> s) {
    if (s.size() == 1) {
        return s[0] > 1 ? "First" : "Second";
    }
    int res = 0, sum = 0;
    for (auto num: s) {
        res = res ^ num;
        sum += num;
    }
    if (sum == s.size()) {
        return s.size() % 2 == 0 ? "First" : "Second";
    }
    return res == 0 ? "Second" : "First";
}
