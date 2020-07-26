// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/composing-squared-strings.html .

using namespace std;

class ComposeSqStrings {
  public:
    static std::string compose(const std::string &s1, const std::string &s2) {
        vector<string> items1, items2;
        int pre = 0;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == '\n') {
                items1.push_back(s1.substr(pre, i - pre));
                pre = i + 1;
            } else if (i == s1.size() - 1) {
                items1.push_back(s1.substr(pre));
            }
        }
        pre = 0;
        for (int i = 0; i < s2.size(); i++) {
            if (s2[i] == '\n') {
                items2.push_back(s2.substr(pre, i - pre));
                pre = i + 1;
            } else if (i == s2.size() - 1) {
                items2.push_back(s2.substr(pre));
            }
        }
        int n = items1.size();
        string res;
        for (int i = 0; i < n; i++) {
            string item =
                items1[i].substr(0, i + 1) + items2[n - 1 - i].substr(0, n - i);
            res += item;
            if (i != n - 1) {
                res += "\n";
            }
        }
        return res;
    }
};
