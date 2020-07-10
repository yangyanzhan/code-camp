// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/heros-root.html .

using namespace std;

class IntSqRoot {
  public:
    static long long intRac(long long n, long long guess) {
        long long res = 1;
        while (true) {
            long long new_guess = (guess + n / guess) / 2;
            if (new_guess == guess) {
                break;
            }
            guess = new_guess;
            res++;
        }
        return res;
    }
};
