// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/maximum-nesting-depth-of-two-valid-parentheses-strings.html .

class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n = seq.size();
        vector<int> res(n, 0);
        int c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++) {
            auto ch = seq[i];
            if (ch == '(') {
                if (c1 < c2) {
                    c1++;
                } else {
                    c2++;
                    res[i] = 1;
                }
            } else {
                if (c1 > c2) {
                    c1--;
                } else {
                    c2--;
                    res[i] = 1;
                }
            }
        }
        return res;
    }
};

