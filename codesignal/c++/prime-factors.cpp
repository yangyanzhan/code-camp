// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/prime-factors.html .

std::vector<int> primeFactors(int n) {
    using namespace std;
    vector<int> res;
    int p = 1;
    while (p <= sqrt(n)) {
        if (p != 1) {
            while (n % p == 0) {
                res.push_back(p);
                n /= p;
            }
        }
        p++;
    }
    if (n > 1) {
        res.push_back(n);
    }
    return res;
}

