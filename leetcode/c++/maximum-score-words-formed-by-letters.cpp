// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/maximum-score-words-formed-by-letters.html .

class Solution {
    int res = 0;
    int sum = 0;

  public:
    int maxScoreWords(vector<string> &words, vector<char> &letters,
                      vector<int> &score) {
        map<char, int> cache;
        for (auto letter : letters) {
            if (cache.find(letter) == cache.end()) {
                cache[letter] = 0;
            }
            cache[letter]++;
        }
        dfs(words, cache, score, 1);
        return res;
    }

    void dfs(vector<string> &words, map<char, int> letters, vector<int> &score,
             int depth) {
        int n = words.size();
        if (depth > n || letters.size() == 0) {
            res = max(res, sum);
            return;
        }
        bool valid = true;
        int total = 0;
        map<char, int> tmp(letters.begin(), letters.end());
        for (auto &ch : words[depth - 1]) {
            if (tmp.find(ch) == tmp.end()) {
                valid = false;
                break;
            } else {
                total += score[ch - 'a'];
                tmp[ch]--;
                if (tmp[ch] == 0) {
                    tmp.erase(ch);
                }
            }
        }
        if (valid) {
            sum += total;
            dfs(words, tmp, score, depth + 1);
            sum -= total;
        }
        dfs(words, letters, score, depth + 1);
    }
};
