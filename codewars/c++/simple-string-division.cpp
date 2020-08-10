// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/simple-string-division.html .

using namespace std;

long long solve(std::string st, int k) {
    if (k == 0) {
        return stoll(st);
    }
    long long res = 0;
    for (int len = 1; len <= st.size() - k; len++) {
        long long r =
            max(stoll(st.substr(0, len)), solve(st.substr(len), k - 1));
        res = max(res, r);
    }
    return res;
}
