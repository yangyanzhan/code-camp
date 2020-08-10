// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/simple-array-product.html .

using namespace std;

int solve(std::vector<std::vector<int>> v) {
    int mini = 1, maxi = 1;
    for (auto vs : v) {
        auto pair = minmax_element(vs.begin(), vs.end());
        int n1 = *pair.first, n2 = *pair.second;
        int a = mini * n1, b = mini * n2, c = maxi * n1, d = maxi * n2;
        vector<int> nums{a, b, c, d};
        pair = minmax_element(nums.begin(), nums.end());
        mini = *pair.first;
        maxi = *pair.second;
    }
    return maxi;
}
