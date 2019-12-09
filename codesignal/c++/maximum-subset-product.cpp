// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/maximum-subset-product.html .

int maximumSubsetProduct(std::vector<int> a) {
    using namespace std;
    if (a.size() == 1) {
        return 1;
    }
    int neg = 0, max_neg = numeric_limits<int>::min();
    for (auto num: a) {
        if (num < 0) {
            neg++;
            max_neg = max(max_neg, num);
        }
    }
    if (neg % 2 == 0) {
        return 1;
    }
    return max_neg;
}

