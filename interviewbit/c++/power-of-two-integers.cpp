// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/power-of-two-integers.html .

map<int, int> getFactors(int n) {
    int i = 2;
    map<int, int> res;
    while (n > 1) {
        if (n % i == 0) {
            int count = 0;
            while (n % i == 0) {
                count++;
                n /= i;
            }
            res[i] = count;
        }
        i++;
    }
    return res;
}

int gcd(int a, int b) {
    if (a % b == 0) return b;
    return gcd(b, a % b);
}

int Solution::isPower(int n) {
    if (n <= 1) return true;
    map<int, int> factors = getFactors(n);
    int g = 0;
    for (auto it : factors) {
        int factor = it.first, count = it.second;
        if (g == 0) {
            g = count;
        } else {
            g = gcd(max(g, count), min(g, count));
        }
    }
    return g > 1;
}

