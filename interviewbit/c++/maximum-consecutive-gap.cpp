// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/maximum-consecutive-gap.html .

int Solution::maximumGap(const vector<int> &A) {
    if (A.size() < 2) return 0;
    int n = A.size(), res = 0;
    double mini = *min_element(A.begin(), A.end()), maxi = *max_element(A.begin(), A.end());
    if (maxi == mini) return 0;
    vector<int> low(n + 1, -1), high(n + 1, -1);
    for (int num : A) {
        int idx = (int)floor((num - mini) / (maxi - mini) * n);
        if (low[idx] == -1) {
            low[idx] = num;
            high[idx] = num;
        } else {
            low[idx] = min(num, low[idx]);
            high[idx] = max(num, high[idx]);
        }
    }
    int pre = high[0];
    for (int i = 1; i <= n; i++) {
        if (low[i] != -1) {
            if (pre != -1) {
                res = max(res, low[i] - pre);
            }
            pre = high[i];
        }
    }
    return res;
}

