// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

class Token {
  public:
    char ch;
    bool could_rewind;
    int count;
};

class Solution {
  public:
    bool isMatch(string str, string pattern) {
        if (pattern == "") {
            return str == "";
        }
        if (str == "") {
            if (pattern.size() % 2 != 0) {
                return false;
            }
            for (int i = 0; i < pattern.size(); i++) {
                if (i % 2 == 0) {
                    if (pattern[i] == '*') {
                        return false;
                    }
                } else {
                    if (pattern[i] != '*') {
                        return false;
                    }
                }
            }
            return true;
        }
        vector<Token> tokens;
        for (int i = 0; i < pattern.size(); i++) {
            char ch = pattern[i];
            if (ch == '*') {
                return false;
            }
            Token token;
            token.ch = ch;
            token.count = 0;
            token.could_rewind = false;
            if (i + 1 < pattern.size()) {
                if (pattern[i + 1] == '*') {
                    token.could_rewind = true;
                    i++;
                }
            }
            tokens.push_back(token);
        }
        vector<Token> visited;
        int idx = 0;
        while (idx < str.size() || visited.size() < tokens.size()) {
            char ch = '\0';
            if (idx < str.size()) {
                ch = str[idx];
            }
            bool should_rewind = true;
            if (visited.size() < tokens.size()) {
                Token token(tokens[visited.size()]);
                if (ch == '\0') {
                    if (token.could_rewind) {
                        should_rewind = false;
                    }
                } else {
                    if (token.could_rewind) {
                        if (token.ch == '.') {
                            should_rewind = false;
                            token.count = str.size() - idx;
                            idx = str.size();
                        } else {
                            should_rewind = false;
                            int match_count = 0;
                            for (int i = idx; i < str.size(); i++) {
                                if (token.ch != str[i]) {
                                    break;
                                }
                                match_count++;
                            }
                            token.count = match_count;
                            idx += match_count;
                        }
                    } else {
                        if (token.ch == '.' || token.ch == ch) {
                            should_rewind = false;
                            token.count = 1;
                            idx++;
                        }
                    }
                }
                if (!should_rewind) {
                    visited.push_back(token);
                }
            }
            if (!should_rewind) {
                continue;
            }
            int ch_consumed = 0;
            bool success = false;
            for (int i = visited.size() - 1; i >= 0; i--) {
                if (visited[i].could_rewind && visited[i].count > 0) {
                    visited[i].count--;
                    ch_consumed++;
                    success = true;
                    visited.erase(visited.begin() + i + 1, visited.end());
                    idx -= ch_consumed;
                    break;
                } else {
                    ch_consumed += visited[i].count;
                }
            }
            if (!success) {
                return false;
            }
        }
        return true;
    }
};
