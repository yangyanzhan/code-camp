// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/a-rule-of-divisibility-7.html .

class DivSeven {
  public:
    static std::pair<long long, long long> seven(long long m) {
        int c = 0;
        while (m >= 100) {
            int a = m / 10, b = m % 10;
            m = a - 2 * b;
            c++;
        }
        return {m, c};
    }
};
