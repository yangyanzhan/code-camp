// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/relatively-prime-numbers.html .

#include <vector>
#include <algorithm>

using namespace std;

int gcdv(int a, int b) {
    if (a % b == 0) {
        return b;
    }
    return gcdv(b, a % b);
}

int gcd(int a, int b) {
    return gcdv(max(a, b), min(a, b));
}

std::vector<int> relativelyPrime(int n, std::vector<int> list) {
    using namespace std;
    vector<int> res;
    for (auto num: list) {
        if (gcd(n, num) == 1) {
            res.push_back(num);
        }
    }
    return res;
}

