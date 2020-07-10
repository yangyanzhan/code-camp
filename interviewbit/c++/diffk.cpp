// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/diffk.html .

int Solution::diffPossible(vector<int> &A, int B) {
    int i = 0, j = 0, n = A.size();
    while (i < n && j < n) {
        int diff = A[j] - A[i];
        if (diff == B && i != j)
            return 1;
        if (diff > B) {
            i++;
        } else {
            j++;
        }
    }
    return 0;
}
