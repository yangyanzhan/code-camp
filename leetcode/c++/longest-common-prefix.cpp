// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/longest-common-prefix.html .

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs) {
        if (strs.size() == 0) {
            return "";
        }
        if (strs.size() == 1) {
            return strs[0];
        }
        int max_count = numeric_limits<int>::max();
        for (auto &str: strs) {
            max_count = min(max_count, (int)str.size());
        }
        if (max_count == 0) {
            return "";
        }
        int c = 0;
        for (int i = 0; i < max_count; i++) {
            char target = strs[0][i];
            bool same = true;
            for (int j = 1; j < strs.size(); j++) {
                if (strs[j][i] != target) {
                    same = false;
                    break;
                }
            }
            if (!same) {
                break;
            }
            c++;
        }
        return strs[0].substr(0, c);
    }
};

