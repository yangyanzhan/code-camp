// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/different-bits-sum-pairwise.html .

int Solution::cntBits(vector<int> &A) {
    long long base = 1000000007;
    long long res = 0;
    for (int i = 0; i < 32; i++) {
        int f = 1 << i;
        long long n1 = 0, n2 = 0;
        for (int num : A) {
            if ((num & f) != 0) {
                n1++;
            } else {
                n2++;
            }
        }
        res += ((n1 % base) * ((n2) % base) * 2) % base;
    }
    return res % base;
}
