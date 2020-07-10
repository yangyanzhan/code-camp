// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/fibonacci-number.html .

int fibonacciNumber(int n) {
    using namespace std;
    if (n == 0) {
        return 0;
    }
    vector<int> nums(n + 1, 0);
    nums[1] = 1;
    for (int i = 2; i <= n; i++) {
        nums[i] = nums[i - 1] + nums[i - 2];
    }
    return nums[n];
}
