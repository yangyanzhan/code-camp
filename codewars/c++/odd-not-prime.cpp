// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/odd-not-prime.html .

using namespace std;

#include <cmath>

bool is_prime(long long n) {
    if (n == 1) {
        return false;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (long long i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

unsigned int oddNotPrime(unsigned int n) {
    long long res = 0;
    for (long long m = 1; m <= n; m += 2) {
        if (!is_prime(m)) {
            res++;
        }
    }
    return res;
}
