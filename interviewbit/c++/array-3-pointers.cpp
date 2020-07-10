// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/array-3-pointers.html .

int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int i = 0, j = 0, k = 0, n1 = A.size(), n2 = B.size(), n3 = C.size(), best = INT_MAX;
    while (i < n1 && j < n2 && k < n3) {
        int a = A[i], b = B[j], c = C[k];
        int bottom = min(a, min(b, c));
        int top = max(a, max(b, c));
        int diff = top - bottom;
        if (diff == 0) {
            return 0;
        }
        best = min(best, diff);
        if (a == bottom) {
            i++;
        } else if (b == bottom) {
            j++;
        } else {
            k++;
        }
    }
    return best;
}
