// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/maximum-sum.html .

int maximumSum(std::vector<int> a, std::vector<std::vector<int>> q) {
    using namespace std;
    int n = a.size();
    vector<int> counts(n, 0);
    for (auto query: q) {
        for (int i = query[0]; i <= query[1]; i++) {
            counts[i]++;
        }
    }
    sort(counts.begin(), counts.end());
    sort(a.begin(), a.end());
    int sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        sum += counts[i] * a[i];
    }
    return sum;
}

