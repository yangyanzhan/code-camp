// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/max-distance.html .

int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    vector<int> minLeft{A[0]}, maxRight{A[n - 1]};
    for (int i = 1; i < n; i++) {
        minLeft.push_back(min(A[i], minLeft[i - 1]));
        maxRight.push_back(max(A[n - 1 - i], maxRight[i - 1]));
    }
    reverse(maxRight.begin(), maxRight.end());
    int i = 0, j = 0, best = -1;
    while (i < n && j < n) {
        if (minLeft[i] <= maxRight[j]) {
            best = max(best, j - i);
            j++;
        } else {
            i++;
        }
    }
    return best;
}

