// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/leonardo-numbers.html .

using namespace std;

std::vector<int> L(int n, int L0, int L1, int add) {
    vector<int> res{L0, L1};
    int a = L0, b = L1;
    for (int i = 3; i <= n; i++) {
        int c = a + b + add;
        res.push_back(c);
        a = b;
        b = c;
    }
    return res;
}
