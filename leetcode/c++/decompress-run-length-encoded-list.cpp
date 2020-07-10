// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/decompress-run-length-encoded-list.html .

class Solution {
  public:
    vector<int> decompressRLElist(vector<int> &nums) {
        int n = nums.size();
        vector<int> res;
        for (int i = 0; i < n / 2; i++) {
            for (int j = 0; j < nums[2 * i]; j++) {
                res.push_back(nums[2 * i + 1]);
            }
        }
        return res;
    }
};
