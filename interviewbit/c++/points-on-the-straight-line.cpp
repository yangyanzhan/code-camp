// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/points-on-the-straight-line.html .

int gcd(int a, int b) {
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a < 0)
        return gcd(-1 * a, b);
    if (b < 0)
        return gcd(a, -1 * b);
    if (a > b)
        return gcd(b, a);
    return gcd(b % a, a);
}

int Solution::maxPoints(vector<int> &X, vector<int> &Y) {
    map<pair<int, int>, int> M;
    int ans = 0;
    for (int i = 0; i < X.size(); i++) {
        M.clear();
        int same = 1, curMax = 0;
        // Try to find all the lines with same slope with points[i] as one end.
        // Points with the same slope lie on the same line.
        // We need to make sure we handle divisions by zero in cases like these.
        // We also need to take care of overlapping points.
        for (int j = i + 1; j < X.size(); j++) {
            int xdiff = X[i] - X[j];
            int ydiff = Y[i] - Y[j];
            if (xdiff == 0 && ydiff == 0) {
                // Same points
                same++;
                continue;
            }
            if (xdiff < 0) {
                xdiff *= -1;
                ydiff *= -1;
            }
            int g = gcd(xdiff, ydiff);
            M[make_pair(xdiff / g, ydiff / g)]++;
            curMax = max(curMax, M[make_pair(xdiff / g, ydiff / g)]);
        }
        curMax += same;
        ans = max(ans, curMax);
    }
    return ans;
}
