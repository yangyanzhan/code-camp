// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/mumbling.html .

class Accumul {
public:
    static std::string accum(const std::string &s) {
        using namespace std;
        string res;
        for (int i = 0; i < s.size(); i++) {
            string t1 = s.substr(i, 1), t2 = t1;
            for (auto &ch: t1) {
                ch = toupper(ch);
            }
            for (auto &ch: t2) {
                ch = tolower(ch);
            }
            res += t1;
            for (int j = 1; j < i + 1; j++) {
                res += t2;
            }
            res += "-";
        }
        return res.substr(0, res.size() - 1);
    }
};

