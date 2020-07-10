// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/coin-sum-infinite.html .

int Solution::coinchange2(vector<int> &A, int B) {
    vector<int> cache(1 + B, 0);
    cache[0] = 1;
    int n = A.size();
    for (int i = 0; i < n; i++) {
        int a = A[i];
        for (int j = a; j <= B; j++) {
            cache[j] += cache[j - a];
            cache[j] %= 1000007;
        }
    }
    return cache[B];
}
