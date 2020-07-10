// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/maximum-unsorted-subarray.html .

vector<int> Solution::subUnsort(vector<int> &A) {
    int n = A.size(), begin = -1, end = -1;
    for (int i = 0; i < n; i++) {
        if (A[i] > A[i + 1]) {
            begin = i;
            break;
        }
    }
    for (int i = n - 1; i > 0; i--) {
        if (A[i - 1] > A[i]) {
            end = i;
            break;
        }
    }
    if (begin == -1 || end == -1) {
        return vector<int>{-1};
    }
    int max1 = *max_element(A.begin() + begin, A.begin() + end + 1);
    int min1 = *min_element(A.begin() + begin, A.begin() + end + 1);
    for (int i = 0; i < begin; i++) {
        if (A[i] > min1) {
            begin = i;
            break;
        }
    }
    for (int i = n - 1; i > end; i--) {
        if (A[i] < max1) {
            end = i;
            break;
        }
    }
    return vector<int>{begin, end};
}
