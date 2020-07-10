// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/sorted-permutation-rank.html .

int fact(int n) {
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
        res %= 1000003;
    }
    return res;
}

int Solution::findRank(string A) {
    int n = A.length();
    int res = 0;
    for (int i = 0; i < n - 1; i++) {
        int smaller = 0;
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[i]) smaller++;
        }
        res += smaller * fact(n - i - 1);
        res %= 1000003;
    }
    return res + 1;
}

