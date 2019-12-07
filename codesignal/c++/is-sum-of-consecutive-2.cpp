// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/is-sum-of-consecutive-2.html .

int isSumOfConsecutive2(int n) {
    int res = 0;
    for (int i = 1; i < n; i++) {
        int sum = i;
        for (int j = i + 1; j < n; j++) {
            sum += j;
            if (sum > n) {
                break;
            }
            if (sum == n) {
                res++;
            }
        }
    }
    return res;
}

