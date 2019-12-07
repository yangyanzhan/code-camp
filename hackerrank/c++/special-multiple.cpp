// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/special-multiple.html .

string solve(int n) {
    unsigned long long trial = 1;
    while (true) {
        unsigned long long number = 0;
        unsigned long long tmp = trial;
        unsigned long long base = 1;
        while (tmp > 0) {
            number += 9 * (tmp % 2) * base;
            tmp /= 2;
            base *= 10;
        }
        if (number % n == 0) {
            return to_string(number);
        }
        trial++;
    }
}
