// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/regular-expression-matching.html .

class Token {
public:
    bool repeats = false;
    bool wildcard = false;
    char content = '\0';
};

class Solution {
public:
    bool isMatch(string s, string p) {
        vector<Token> tokens;
        for (int i = 0; i < p.size(); i++) {
            char curr = p[i];
            char next = '\0';
            if (i < p.size() - 1) {
                next = p[i + 1];
            }
            Token token;
            token.content = curr;
            if (curr == '.') {
                token.wildcard = true;
            }
            if (next == '*') {
                token.repeats = true;
                i++;
            }
            tokens.push_back(token);
        }
        return isMatch(s, tokens);
    }

    bool isMatch(string s, vector<Token> tokens) {
        if (tokens.size() == 0) {
            return s.size() == 0;
        }
        Token token = tokens[0];
        vector<Token> remains(tokens.begin() + 1, tokens.end());
        if (!token.repeats) {
            if (s.size() == 0) {
                return false;
            }
            char ch = s[0];
            if (token.wildcard || (token.content == ch)) {
                return isMatch(s.substr(1), remains);
            } else {
                return false;
            }
        } else {
            int max_repeats = 0;
            for (int i = 0; i < s.size(); i++) {
                if (token.wildcard || (s[i] == token.content)) {
                    max_repeats++;
                } else {
                    break;
                }
            }
            for (int repeats = max_repeats; repeats >= 0; repeats--) {
                bool match = isMatch(s.substr(repeats), remains);
                if (match) {
                    return true;
                }
            }
            return false;
        }
    }
};

