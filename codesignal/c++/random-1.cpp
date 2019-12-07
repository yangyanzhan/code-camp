// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/random-1.html .

int random1(int seed, int n) {
    using namespace std;
    long long res = seed;
    int len = to_string(res).size();
    for (int i = 1; i <= n; i++) {
        res *= res;
        string whole = to_string(res);
        while (2 * len != whole.size()) {
            whole = "0" + whole;
        }
        string part = whole.substr(len / 2, len);
        res = stoll(part);
    }
    return res;
}
