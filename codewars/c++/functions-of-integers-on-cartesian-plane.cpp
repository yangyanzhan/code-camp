// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/functions-of-integers-on-cartesian-plane.html .

using namespace std;

class Funij {
  public:
    static unsigned long long sumin(unsigned long long n) {
        return n * (n + 1) * (2 * n + 1) / 6;
    }
    static unsigned long long sumax(unsigned long long n) {
        return n * n * (n + 1) - n * (n + 1) * (2 * n + 1) / 6;
    }
    static unsigned long long sumsum(unsigned long long n) {
        auto m = n * (n + 1) / 2;
        return n * m + n * m;
    }
};
