// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/find-and-replace-pattern.html .

class Solution {
  public:
    vector<string> findAndReplacePattern(vector<string> &words,
                                         string pattern) {
        vector<string> res;
        for (auto word : words) {
            int n = pattern.size();
            if (word.size() != n) {
                continue;
            }
            map<char, char> cache1;
            map<char, char> cache2;
            bool valid = true;
            for (int i = 0; i < n; i++) {
                auto k = word[i];
                auto v = pattern[i];
                if (cache1.find(k) == cache1.end()) {
                    cache1[k] = v;
                } else {
                    if (cache1[k] != v) {
                        valid = false;
                        break;
                    }
                }
                if (cache2.find(v) == cache2.end()) {
                    cache2[v] = k;
                } else {
                    if (cache2[v] != k) {
                        valid = false;
                        break;
                    }
                }
            }
            if (valid) {
                res.push_back(word);
            }
        }
        return res;
    }
};
