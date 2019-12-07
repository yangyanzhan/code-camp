// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/different-values-in-multiplication-table-2.html .

int differentValuesInMultiplicationTable2(int n, int m) {
    using namespace std;
    set<int> cache;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cache.insert(i * j);
        }
    }
    return cache.size();
}

