// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/product-of-maximums-of-array.html .

#include <vector>

using namespace std;

int maxProduct(vector<int> numbers, int sub_size) {
    sort(numbers.begin(), numbers.end());
    int res = 1;
    for (int i = 0; i < sub_size; i++) {
        res *= numbers[numbers.size() - 1 - i];
    }
    return res;
}

