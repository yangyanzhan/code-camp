// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/complete-the-pattern-2.html .

#include <string>

class Pattern {
  public:
    static string pattern(int n) {
        using namespace std;
        if (n < 1) {
            return "";
        }
        string res;
        for (int i = n; i >= 1; i--) {
            string item;
            for (int j = n; j >= n - i + 1; j--) {
                item += to_string(j);
            }
            res += item;
            if (i != 1) {
                res += "\n";
            }
        }
        return res;
    }
};
