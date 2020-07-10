// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/max-product-subarray.html .

int Solution::maxProduct(const vector<int> &A) {
    int n = A.size(), best = INT_MIN;
    vector<int> maxNums(n), minNums(n);
    maxNums[0] = A[0], minNums[0] = A[0], best = A[0];
    for (int i = 1; i < n; i++) {
        int num = A[i];
        if (num > 0) {
            maxNums[i] = max(num, num * maxNums[i - 1]);
            minNums[i] = min(num, num * minNums[i - 1]);
        } else {
            maxNums[i] = max(num, num * minNums[i - 1]);
            minNums[i] = min(num, num * maxNums[i - 1]);
        }
        best = max(best, maxNums[i]);
    }
    return best;
}

