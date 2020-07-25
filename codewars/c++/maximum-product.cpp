// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/maximum-product.html .

#include <vector>

using namespace std;

int adjacentElementsProduct(vector<int> inputArray) {
    int res = numeric_limits<int>::min();
    for (int i = 0; i < inputArray.size() - 1; i++) {
        int p = inputArray[i] * inputArray[i + 1];
        res = max(res, p);
    }
    return res;
}
