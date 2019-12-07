// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/prime-factors-2.html .

std::vector<int> primeFactors2(int n) {
    using namespace std;
    if (n <= 1) {
        return vector<int>{};
    }
    vector<int> res;
    if (n % 2 == 0) {
        res.push_back(2);
        while (n % 2 == 0) {
            n /= 2;
        }
    }
    for (int factor = 3; factor <= int(sqrt(n)); factor += 2) {
        if (n % factor == 0) {
            res.push_back(factor);
        }
        while (n % factor == 0) {
            n /= factor;
        }
        if (n == 1) {
            break;
        }
    }
    if (n > 1) {
        res.push_back(n);
    }
    return res;
}

