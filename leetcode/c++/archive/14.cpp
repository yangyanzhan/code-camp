// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0) {
            return "";
        }
        if (strs.size() == 1) {
            return strs[0];
        }
        int n = strs[0].size();
        for (int i = 1; i < strs.size(); i++) {
            int m = strs[i].size();
            if (m < n) {
                n = m;
            }
        }
        if (n == 0) {
            return "";
        }
        char *chars = new char[n + 1];
        int count = 0;
        while (count < n) {
            char ch = strs[0][count];
            bool match = true;
            for (int i = 1; i < strs.size(); i++) {
                if (ch != strs[i][count]) {
                    match = false;
                    break;
                }
            }
            if (!match) {
                break;
            }
            chars[count++] = ch;
        }
        chars[count] = '\0';
        string res(chars, chars + count);
        delete[] chars;
        return res;
    }
};
