// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/how-many-numbers-are-smaller-than-the-current-number.html .

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int> &nums) {
        vector<vector<int>> cache;
        for (int i = 0; i < nums.size(); i++) {
            auto num = nums[i];
            cache.push_back({num, i});
        }
        sort(cache.begin(), cache.end());
        vector<int> res(nums.size(), -1);
        int count = 0, inc = 0, curr = cache[0][0];
        for (auto &item: cache) {
            int num = item[0], idx = item[1];
            if (num == curr) {
                inc++;
            } else {
                count += inc;
                inc = 1;
                curr = num;
            }
            res[idx] = count;
        }
        for (int i = 0; i < res.size(); i++) {
            if (res[i] == -1) {
                res[i] = count;
            }
        }
        return res;
    }
};

