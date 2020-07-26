// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/distributing-candies-fairly.html .

#include <vector>

using namespace std;

std::vector<int> distribute(int m, int n) {
    m = m < 0 ? 0 : m;
    if (n <= 0) {
        return {};
    }
    vector<int> res;
    for (int i = 0; i < n; i++) {
        int num = m / n;
        if (i < m % n) {
            num++;
        }
        res.push_back(num);
    }
    return res;
}
