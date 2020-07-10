// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/prime-sum.html .

vector<int> Solution::primesum(int A) {
    vector<bool> isPrime(A + 1, true);
    isPrime[0] = false, isPrime[1] = false;
    for (int num = 2; num <= A; num++) {
        if (isPrime[num]) {
            for (int i = 2; num * i <= A; i++) {
                isPrime[num * i] = false;
            }
        }
    }
    for (int num = 2; num <= A; num++) {
        if (isPrime[num] && isPrime[A - num]) {
            return vector<int>{num, A - num};
        }
    }
    return vector<int>();
}
