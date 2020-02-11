// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/valid-parentheses.html .

class Solution {
public:
    bool isValid(string s) {
        using namespace std;
        vector<char> cache;
        for (auto ch: s) {
            if (ch == ']') {
                if (cache.empty() || cache.back() != '[') {
                    return false;
                }
                cache.pop_back();
            } else if (ch == ')') {
                if (cache.empty() || cache.back() != '(') {
                    return false;
                }
                cache.pop_back();
            } else if (ch == '}') {
                if (cache.empty() || cache.back() != '{') {
                    return false;
                }
                cache.pop_back();
            } else {
                cache.push_back(ch);
            }
        }
        return cache.empty();
    }
};

