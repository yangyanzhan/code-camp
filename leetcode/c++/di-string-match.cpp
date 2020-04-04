// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/di-string-match.html .

class Solution {
public:
    vector<int> diStringMatch(string S) {
        int n = S.size(), mini = 0, maxi = n;
        vector<int> res;
        for (auto ch: S) {
            if (ch == 'I') {
                res.push_back(mini++);
            } else {
                res.push_back(maxi--);
            }
        }
        res.push_back(mini);
        return res;
    }
};

