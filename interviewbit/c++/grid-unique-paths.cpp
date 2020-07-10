// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/grid-unique-paths.html .

int Solution::uniquePaths(int A, int B) {
    int n = A - 1 + B - 1, i = max(A - 1, B - 1) + 1, j = min(A - 1, B - 1), m = 1;
    long long res = 1;
    for (int k = i; k <= n; k++) {
        res *= k;
        if (m <= j && res % m == 0) {
            res /= m;
            m++;
        }
    }
    for (int k = m; k <= j; k++) {
        res /= k;
    }
    return res;
}

