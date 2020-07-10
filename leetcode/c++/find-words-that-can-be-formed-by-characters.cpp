// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/find-words-that-can-be-formed-by-characters.html .

class Solution {
  public:
    int countCharacters(vector<string> &words, string chars) {
        map<char, int> cache;
        for (auto ch : chars) {
            if (cache.find(ch) == cache.end()) {
                cache[ch] = 0;
            }
            cache[ch]++;
        }
        int res = 0;
        for (auto &word : words) {
            map<char, int> tmp = cache;
            bool valid = true;
            for (auto ch : word) {
                if (tmp.find(ch) == tmp.end() || tmp[ch] == 0) {
                    valid = false;
                    break;
                } else {
                    tmp[ch]--;
                }
            }
            if (valid) {
                res += word.size();
            }
        }
        return res;
    }
};
