// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/rotate-image.html .

std::vector<std::vector<int>> rotateImage(std::vector<std::vector<int>> nums) {
    using namespace std;
    int n = nums.size();
    for (int c = 1; c <= n / 2; c++) {
        for (int i = 1; i <= n - 2 * c + 1; i++) {
            swap(nums[c - 1][c - 1 + i - 1], nums[c - 1 + i - 1][n - c]);
        }
        for (int i = 1; i <= n - 2 * c + 1; i++) {
            swap(nums[c - 1][c - 1 + i - 1], nums[n - c][n - c - (i - 1)]);
        }
        for (int i = 1; i <= n - 2 * c + 1; i++) {
            swap(nums[c - 1][c - 1 + i - 1], nums[n - c - (i - 1)][c - 1]);
        }
    }
    return nums;
}

