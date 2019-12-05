// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/reversed-sum-of-digits.html .

std::string reversedSumOfDigits(int p, int n) {
    using namespace std;
    if (p > 9 * n) {
        return "-1";
    }
    string res = "";
    if (p == 9 * n) {
        for (int i = 1; i <= n; i++) {
            res += "9";
        }
        return res;
    }
    if (p == 0) {
        if (n == 1) {
            return "0";
        } else {
            return "-1";
        }
    }
    int num9 = p / 9, head;
    if (p % 9 == 0) {
        head = 9;
        num9--;
    } else {
        head = p % 9;
    }
    if (num9 == n - 1) {
        res += to_string(head);
        for (int i = 1; i <= n - 1; i++) {
            res += "9";
        }
        return res;
    }
    res += "1";
    for (int i = 1; i <= n - num9 - 2; i++) {
        res += "0";
    }
    res += to_string(head - 1);
    for (int i = 1; i <= num9; i++) {
        res += "9";
    }
    return res;
}

