// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/magician-and-chocolates.html .

int Solution::nchoc(int A, vector<int> &B) {
    make_heap(B.begin(), B.end());
    int n = B.size();
    long long res = 0;
    long long base = 1000000007;
    for (int i = 0; i < A; i++) {
        res += B.front();
        res %= base;
        pop_heap(B.begin(), B.end());
        B[n - 1] /= 2;
        push_heap(B.begin(), B.end());
    }
    return res;
}
