// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/diffk-ii.html .

int Solution::diffPossible(const vector<int> &A, int B) {
    vector<int> A1 = A;
    sort(A1.begin(), A1.end());
    int i = 0, j = 0, n = A1.size();
    while (i < n && j < n) {
        if (i == j) {
            j++;
        } else {
            int a = A1[i], b = A1[j], diff = b - a;
            if (diff == B) {
                return 1;
            } else if (diff < B) {
                j++;
            } else {
                i++;
            }
        }
    }
    return 0;
}
