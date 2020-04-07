// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/reverse-words-in-a-string-iii.html .

class Solution {
public:
    string reverseWords(string s) {
        string res;
        s += " ";
        regex reg("([^ ]+)([ ]+)");
        for (auto it = sregex_iterator(s.begin(), s.end(), reg); it != sregex_iterator(); it++) {
            auto part1 = it->str(1);
            auto part2 = it->str(2);
            reverse(part1.begin(), part1.end());
            res += part1 + part2;
        }
        res = res.substr(0, res.size() - 1);
        return res;
    }
};

