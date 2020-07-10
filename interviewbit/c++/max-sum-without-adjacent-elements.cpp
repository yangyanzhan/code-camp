// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/max-sum-without-adjacent-elements.html .

int Solution::adjacent(vector<vector<int>> &A) {
    int n = A[0].size(), used = 0, unused = 0;
    for (int i = 0; i < n; i++) {
        int curr = max(A[0][i], A[1][i]);
        int tmp = used;
        used = unused + curr;
        unused = max(tmp, unused);
    }
    return max(used, unused);
}
