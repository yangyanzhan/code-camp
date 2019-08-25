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
