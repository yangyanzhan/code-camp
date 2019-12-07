// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/identify-smith-numbers.html .

int sum(int n) {
    int res = 0;
    while (n >= 10) {
        res += n % 10;
        n /= 10;
    }
    res += n;
    return res;
}

vector<int> factors(int n) {
    vector<int> res;
    int factor = 1;
    while (n >= ++factor) {
        while (n % factor == 0) {
            res.push_back(factor);
            n /= factor;
        }
    }
    return res;
}

int solve(int n) {
    int sum1 = sum(n);
    int sum2 = 0;
    for (auto factor: factors(n)) {
        sum2 += sum(factor);
    }
    return sum1 == sum2 ? 1 : 0;
}
