// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/3-sum.html .

int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    int n = A.size(), best = 0, bestDiff = INT_MAX;
    for (int i = 0; i < n - 2; i++) {
        int begin = i + 1, end = n - 1;
        long long sum;
        while (begin < end) {
            sum = A[i];
            sum += A[begin];
            sum += A[end];
            if (sum == B) {
                return B;
            } else {
                if (abs(sum - B) < bestDiff) {
                    best = sum;
                    bestDiff = (int)abs(sum - B);
                }
            }
            if (sum < B) {
                begin++;
            } else {
                end--;
            }
        }
    }
    return best;
}

