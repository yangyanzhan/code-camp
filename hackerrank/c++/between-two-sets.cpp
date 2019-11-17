// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/between-two-sets.html .

long long gcd(long long a, long long b) {
    auto n1 = min(a, b), n2 = max(a, b);
    if (n2 % n1 == 0) {
        return n1;
    }
    return gcd(n2 % n1, n1);
}

long long lcm(long long a, long long b) {
    auto g = gcd(a, b);
    return (a / g) * b;
}

int factors(int n) {
    int res = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            res += 2;
        }
        if (i * i == n) {
            res--;
        }
    }
    return res;
}

int getTotalX(vector<int> a, vector<int> b) {
    int l = a[0], g = b[0];
    for (int i = 1; i < b.size(); i++) {
        g = gcd(g, b[i]);
    }
    for (int i = 1; i < a.size(); i++) {
        l = lcm(l, a[i]);
        if (g < l) {
            return 0;
        }
    }
    if (g % l != 0) {
        return 0;
    }
    return factors(g / l);
}
