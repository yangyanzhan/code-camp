// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/max-sum-contiguous-subarray.html .

int Solution::maxSubArray(const vector<int> &A) {
    int sum = 0, res = A[0];
    for (int num : A) {
        if (sum < 0) {
            sum = 0;
        }
        sum += num;
        res = max(res, sum);
    }
    return res;
}
