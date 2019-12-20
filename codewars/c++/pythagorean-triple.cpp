// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/pythagorean-triple.html .

bool PythagoreanTriple(const int a, const int b, const int c) {
    using namespace std;
    vector<int> nums{a, b, c};
    sort(nums.begin(), nums.end());
    int n1 = nums[0], n2 = nums[1], n3 = nums[2];
    return n1 * n1 + n2 * n2 == n3 * n3;
}
