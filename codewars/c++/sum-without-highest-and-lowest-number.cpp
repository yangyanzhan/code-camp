// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/sum-without-highest-and-lowest-number.html .

#include <vector>
#include <limits>

using namespace std;

int sum(vector<int> numbers) {
    int n = numbers.size();
    if (n <= 1) {
        return 0;
    }
    int minn = numeric_limits<int>::max(), maxn = numeric_limits<int>::min(), res = 0;
    for (auto num: numbers) {
        minn = min(minn, num);
        maxn = max(maxn, num);
        res += num;
    }
    return res - minn - maxn;
}

