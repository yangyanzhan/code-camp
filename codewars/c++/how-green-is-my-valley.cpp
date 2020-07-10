// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/how-green-is-my-valley.html .

class Valley {
  public:
    static std::vector<int> makeValley(std::vector<int> &arr) {
        using namespace std;
        vector<int> nums{arr.begin(), arr.end()};
        sort(nums.begin(), nums.end());
        vector<int> res1;
        vector<int> res2;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if ((nums.size() - 1 - i) % 2 == 0) {
                res1.push_back(nums[i]);
            } else {
                res2.insert(res2.begin(), nums[i]);
            }
        }
        res1.insert(res1.end(), res2.begin(), res2.end());
        return res1;
    }
};
