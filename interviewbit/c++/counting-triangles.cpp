// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/counting-triangles.html .

int Solution::nTriang(vector<int> &A) {
    sort(A.begin(), A.end());
    long long res = 0, base = 1000000007, n = A.size();
    for (int i = 0; i < n - 2; i++) {
        int k = i + 2;
        for (int j = i + 1; j < n - 1; j++) {
            int sum = A[i] + A[j];
            while (k < n && sum > A[k]) {
                k++;
            }
            k--;
            res += k - j;
            res %= base;
        }
    }
    return res;
}
