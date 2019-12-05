// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/fast-symmetrization.html .

std::vector<std::vector<char>> fastSymmetrization(std::vector<std::vector<char>> a) {
    using namespace std;
    int m = a.size(), n = a[0].size();
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n / 2; j++) {
            char &c1 = a[i][j];
            char &c2 = a[i][n - 1 - j];
            if (c1 != c2) {
                if (c1 == '*' && c2 != '*') {
                    c1 = c2;
                } else if (c1 != '*' && c2 == '*') {
                    c2 = c1;
                } else {
                    return {};
                }
            }
        }
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m / 2; i++) {
            char &c1 = a[i][j];
            char &c2 = a[m - 1 - i][j];
            if (c1 != c2) {
                if (c1 == '*' && c2 != '*') {
                    c1 = c2;
                } else if (c1 != '*' && c2 == '*') {
                    c2 = c1;
                } else {
                    return {};
                }
            }
        }
    }
    return a;
}

