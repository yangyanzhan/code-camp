// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/easy-line.html .

#include <cmath>
#include <vector>

class EasyLine {
public:
    static long long easyLine(int n) {
        using namespace std;
        if (n == 0) {
            return 1;
        }
        if (n == 1) {
            return 2;
        }
        vector<double> nums{1, 1};
        for (int c = 2; c <= n; c++) {
            vector<double> new_nums{1};
            for (int i = 1; i < c; i++) {
                new_nums.push_back(nums[i - 1] + nums[i]);
            }
            new_nums.push_back(1);
            nums = new_nums;
        }
        double res = 0;
        for (auto num: nums) {
            res += num * num;
        }
        return round(log(res));
    }
};

