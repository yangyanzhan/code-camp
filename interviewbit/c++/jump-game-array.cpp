// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/jump-game-array.html .

int Solution::canJump(vector<int> &A) {
    int n = A.size(), furthest = 0;
    for (int i = 0; i < n; i++) {
        if (furthest < i) {
            break;
        }
        if (furthest >= n - 1) {
            break;
        }
        furthest = max(furthest, i + A[i]);
    }
    return furthest >= n - 1;
}
