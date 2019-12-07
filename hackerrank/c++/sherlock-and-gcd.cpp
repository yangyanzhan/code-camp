// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/sherlock-and-gcd.html .

int gcd(int a, int b) {
    if (b % a == 0) {
        return a;
    }
    return gcd(b % a, a);
}

string solve(vector<int> a) {
    int n = a.size(), g = a[0];
    for (int i = 1; i < n; i++) {
        int a1 = min(g, a[i]);
        int a2 = max(g, a[i]);
        g = gcd(a1, a2);
        if (g == 1) {
            break;
        }
    }
    return g == 1 ? "YES" : "NO";
}
