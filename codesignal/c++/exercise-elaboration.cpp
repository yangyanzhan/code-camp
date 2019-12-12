// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/exercise-elaboration.html .

std::vector<int> mul(std::vector<int> n1, std::vector<int> n2) {
    using namespace std;
    vector<int> res(n1.size() + n2.size(), 0);
    for (int j = n2.size() - 1; j >= 0; j--) {
        int d2 = n2[j];
        for (int i = n1.size() - 1; i >= 0; i--) {
            int d1 = n1[i];
            int d = d1 * d2;
            res[n2.size() - 1 - j + n1.size() - 1 - i] += d;
        }
    }
    reverse(res.begin(), res.end());
    int carry = 0;
    for (int i = res.size() - 1; i >= 0; i--) {
        res[i] += carry;
        carry = res[i] / 10;
        res[i] %= 10;
    }
    return res;
}

int exerciseElaboration(int p, int n) {
    using namespace std;
    vector<int> num;
    int tmp = p;
    while (tmp > 0) {
        int d = tmp % 10;
        num.insert(num.begin(), d);
        tmp /= 10;
    }
    for (int i = 1; i <= min(n, 100); i++) {
        num.insert(num.begin(), 0);
    }
    tmp = p;
    while (tmp > 0) {
        int d = tmp % 10;
        num.insert(num.begin(), d);
        tmp /= 10;
    }
    vector<int> num2 = mul(num, num);
    int res = 0;
    for (auto d: num2) {
        res += d;
    }
    return res;
}

