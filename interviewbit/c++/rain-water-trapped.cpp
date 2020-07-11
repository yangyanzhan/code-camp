// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/rain-water-trapped.html .

int Solution::trap(const vector<int> &A) {
    int n = A.size();
    int left[n], right[n];
    left[0] = A[0];
    for (int i = 1; i < n; i++) {
        left[i] = max(left[i - 1], A[i]);
    }
    right[n - 1] = A[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        right[i] = max(right[i + 1], A[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += min(left[i], right[i]) - A[i];
    }
    return sum;
}
