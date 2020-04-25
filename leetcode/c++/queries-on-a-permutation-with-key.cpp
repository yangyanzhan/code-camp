// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/queries-on-a-permutation-with-key.html .

class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> nums(m);
        vector<int> res;
        for (int i = 0; i < m; i++) {
            nums[i] = i + 1;
        }
        for (auto query: queries) {
            int idx;
            for (int i = 0; i < m; i++) {
                if (nums[i] == query) {
                    idx = i;
                    break;
                }
            }
            for (int i = idx; i > 0; i--) {
                nums[i] = nums[i - 1];
            }
            nums[0] = query;
            res.push_back(idx);
        }
        return res;
    }
};

