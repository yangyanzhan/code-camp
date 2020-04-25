// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/remove-all-adjacent-duplicates-in-string.html .

class Solution {
public:
    string removeDuplicates(string S) {
        vector<char> chars;
        for (auto ch: S) {
            if (chars.size() > 0) {
                if (chars[chars.size() - 1] == ch) {
                    chars.pop_back();
                } else {
                    chars.push_back(ch);
                }
            } else {
                chars.push_back(ch);
            }
        }
        string res;
        for (auto ch: chars) {
            res += ch;
        }
        return res;
    }
};

