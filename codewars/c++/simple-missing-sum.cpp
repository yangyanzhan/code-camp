// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/simple-missing-sum.html .

using namespace std;

#include <set>

set<long long> sum_up(vector<int> nums) {
    set<long long> res{0};
    if (nums.size() <= 0) {
        return res;
    }
    long long num = nums[0];
    res.insert(num);
    vector<int> sub_nums(nums.begin() + 1, nums.end());
    auto sub_sum = sum_up(sub_nums);
    for (auto n : sub_sum) {
        res.insert(n);
        res.insert(n + num);
    }
    return res;
}

int solve(std::vector<int> v) {
    set<long long> nums = sum_up(v);
    int res = 1;
    while (true) {
        if (nums.find(res) == nums.end()) {
            return res;
        }
        res++;
    }
    return -1;
}
