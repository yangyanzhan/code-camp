// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/sum-factorial.html .

#include <vector>

using namespace std;

unsigned long long int sum_factorial(vector<int> vi) {
    unsigned long long res = 0;
    for (auto n : vi) {
        unsigned long long fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        res += fact;
    }
    return res;
}
