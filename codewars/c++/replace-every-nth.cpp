// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/replace-every-nth.html .

class Kata {
  public:
    std::string replaceNth(std::string text, int n, char oldValue,
                           char newValue) {
        using namespace std;
        string res = text;
        if (n <= 0) {
            return res;
        }
        int count = 0;
        for (auto &ch : res) {
            if (ch == oldValue) {
                count++;
                if (count % n == 0) {
                    ch = newValue;
                }
            }
        }
        return res;
    }
};
