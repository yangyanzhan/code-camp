// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/repeat-and-missing-number-array.html .

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    long long sum = 0, sum2 = 0;
    long long total = n, total2 = n;
    total = total * (n + 1) / 2;
    total2 = total2 * (n + 1) * (2 * n + 1) / 6;
    for (int i = 0; i < n; i++) {
        int num = A[i];
        sum = sum + num;
        sum2 = sum2 + (long long)(num) * num;
    }
    long long b_a = total - sum;
    long long b_a2 = total2 - sum2;
    long long b_add_a = b_a2 / b_a;
    int a = (b_add_a - b_a) / 2;
    int b = (b_a + b_add_a) / 2;
    vector<int> res;
    res.push_back(a);
    res.push_back(b);
    return res;
}

