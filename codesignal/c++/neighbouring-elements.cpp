// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/neighbouring-elements.html .

int neighbouringElements(std::vector<std::vector<int>> nums) {
    using namespace std;
    int res = 0, m = nums.size(), n = nums[0].size();
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < n; j++) {
            if (nums[i][j] == nums[i + 1][j]) {
                res++;
            }
        }
    }
    for (int j = 0; j < n - 1; j++) {
        for (int i = 0; i < m; i++) {
            if (nums[i][j] == nums[i][j + 1]) {
                res++;
            }
        }
    }
    return res;
}
