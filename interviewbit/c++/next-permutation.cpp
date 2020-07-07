// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/next-permutation.html .

vector<int> Solution::nextPermutation(vector<int> &A) {
    int i, j;
    for (i = A.size() - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) {
            for (j = A.size() - 1; j > i; j--) {
                if (A[j] > A[i]) {
                    break;
                }
            }
            swap(A[i], A[j]);
            reverse(A.begin() + i + 1, A.end());
            return A;
        }
    }
    reverse(A.begin(), A.end());
    return A;
}
