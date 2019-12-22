// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/scaling-squared-strings.html .

#include <regex>

class ScalingSqStrings {
public:
    static std::string scale(const std::string &str, int k, int n) {
        using namespace std;
        vector<string> items;
        regex reg("[^\\n]+");
        for (auto it = sregex_iterator(str.begin(), str.end(), reg); it != sregex_iterator(); it++) {
            items.push_back(it->str());
        }
        string res;
        for (auto item: items) {
            string new_item;
            for (auto ch: item) {
                for (int i = 0; i < k; i++) {
                    new_item += ch;
                }
            }
            for (int i = 0; i < n; i++) {
                res += new_item + "\n";
            }
        }
        return res.substr(0, res.size() - 1);
    }
};

