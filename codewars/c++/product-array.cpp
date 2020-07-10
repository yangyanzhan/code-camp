// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/product-array.html .

#include <vector>

using namespace std;

vector<int> productArray(vector<int> numbers) {
    long long prod = 1;
    for (auto num : numbers) {
        prod *= num;
    }
    vector<int> res;
    for (auto num : numbers) {
        res.push_back(prod / num);
    }
    return res;
}
