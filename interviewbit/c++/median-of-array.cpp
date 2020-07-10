// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/median-of-array.html .

double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    int m = A.size(), n = B.size();
    if (m > n) return findMedianSortedArrays(B, A);
    int imin, imax, i, j;
    imin = 0;
    imax = m;
    while (imin <= imax) {
        i = (imin + imax)/2;
        j = (m+n+1)/2 - i;
        if (j > 0 && i < m && B[j - 1] > A[i]) {
            imin = i + 1;
        } else if (i > 0 && j < n && A[i - 1] > B[j]) {
            imax = i - 1;
        } else {
            // Figure out median now.
            int median1 = 0, median2 = 0;
            if (i == 0) {
                median1 = B[j - 1];
            } else if (j == 0) {
                median1 = A[i - 1];
            } else {
                median1 = max(A[i - 1], B[j - 1]);
            }
            if ((m+n) % 2 == 1) {
                return 1.0 * median1;
            }
            if (i == m) {
                median2 = B[j];
            } else if (j == n) {
                median2 = A[i];
            } else {
                median2 = min(A[i], B[j]);
            }
            return 1.0 * (median1 + median2) / 2.0;
        }
    }
    return -1.0;
}
