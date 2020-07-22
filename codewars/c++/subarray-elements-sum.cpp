// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/subarray-elements-sum.html .

#include <vector>

using namespace std;

long elementsSum(const std::vector<std::vector<int>> &arr, int d = 0) {
    int n = arr.size();
    long res = 0;
    for (int i = 0; i < n; i++) {
        int pos = n - 1 - i;
        if (pos >= arr[i].size()) {
            res += d;
        } else {
            res += arr[i][pos];
        }
    }
    return res;
}
