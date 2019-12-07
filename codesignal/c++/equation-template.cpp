// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/equation-template.html .

bool equationTemplate(std::vector<int> values) {
    using namespace std;
    do {
        int n = values.size();
        for (int left = 1; left <= n - 1; left++) {
            long long p1 = 1, p2 = 1;
            for (int i = 0; i < left; i++) {
                p1 *= values[i];
            }
            for (int i = left; i < n; i++) {
                p2 *= values[i];
            }
            if (p1 == p2) {
                return true;
            }
        }
    } while (next_permutation(values.begin(), values.end()));
    return false;
}

