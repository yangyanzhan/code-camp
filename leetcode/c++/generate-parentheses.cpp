// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/generate-parentheses.html .

using namespace std;

class Solution {
  public:
    vector<string> generateParenthesis(int n) {
        auto resSet = _generateParenthesis(n);
        vector<string> res(resSet.begin(), resSet.end());
        return res;
    }

    set<string> _generateParenthesis(int n) {
        set<string> res;
        if (n == 0) {
            return {};
        }
        if (n == 1) {
            return {"()"};
        }
        if (cache.find(n) != cache.end()) {
            return cache[n];
        }
        auto subRes = _generateParenthesis(n - 1);
        for (auto subItem : subRes) {
            res.insert("(" + subItem + ")");
        }
        for (int i = 1; i < n; i++) {
            auto subRes1 = _generateParenthesis(i);
            auto subRes2 = _generateParenthesis(n - i);
            for (auto subItem1 : subRes1) {
                for (auto subItem2 : subRes2) {
                    res.insert(subItem1 + subItem2);
                }
            }
        }
        cache[n] = res;
        return res;
    }

  private:
    map<int, set<string>> cache;
};
