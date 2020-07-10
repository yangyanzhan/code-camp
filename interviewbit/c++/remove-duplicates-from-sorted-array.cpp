// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/remove-duplicates-from-sorted-array.html .

int Solution::removeDuplicates(vector<int> &A) {
    if (A.size() <= 0)
        return 0;
    int pre = A[0], i = 1, j = 1, n = A.size();
    for (i = 1; i < n; i++) {
        int now = A[i];
        if (now == pre) {
        } else {
            A[j++] = now;
        }
        pre = now;
    }
    A.resize(j);
    return A.size();
}
