// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/filling-jars.html .

unsigned long long solve(int n, vector<vector<int>> operations) {
    unsigned long long total = 0;
    for (auto operation: operations) {
        unsigned long long a = operation[0], b = operation[1], c = operation[2];
        total += (b - a + 1) * c;
    }
    return total / n;
}
