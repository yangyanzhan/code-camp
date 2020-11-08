// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/substring-with-concatenation-of-all-words.html .

using namespace std;

class Solution {
  public:
    vector<int> findSubstring(string s, vector<string> &words) {
        map<string, int> cnts;
        for (auto word : words) {
            if (cnts.find(word) == cnts.end()) {
                cnts[word] = 0;
            }
            cnts[word]++;
        }
        vector<int> res;
        int wordLen = words[0].size();
        int totalLen = wordLen * words.size();
        if (totalLen > s.size()) {
            return res;
        }
        for (int i = 0; i <= s.size() - totalLen; i++) {
            map<string, int> cache(cnts);
            bool valid = true;
            for (int j = 0; j < words.size(); j++) {
                string word = s.substr(i + j * wordLen, wordLen);
                if (cache.find(word) == cache.end() || cache[word] == 0) {
                    valid = false;
                    break;
                }
                cache[word]--;
            }
            if (valid) {
                res.push_back(i);
            }
        }
        return res;
    }
};
