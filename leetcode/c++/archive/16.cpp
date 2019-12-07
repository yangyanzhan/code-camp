// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int solution = (nums[0] + nums[1] + nums[2]) - target;
        if (solution == 0) {
            return target;
        }
        int num1, num2, num3, pre_num1 = nums[0] - 1, pre_num2, pre_num3;
        for (int i = 0; i <= n - 3; i++) {
            num1 = nums[i];
            if (num1 == pre_num1) {
                continue;
            }
            pre_num1 = num1;
            int start = i + 1;
            int end = n - 1;
            num2 = nums[start];
            num3 = nums[end];
            while (start < end) {
                int diff = (num1 + num2 + num3) - target;
                if (abs(diff) < abs(solution)) {
                    solution = diff;
                    if (solution == 0) {
                        return target;
                    }
                }
                bool move_start = false;
                bool move_end = false;
                if (diff < 0) {
                    move_start = true;
                } else {
                    move_end = true;
                }
                if (move_start) {
                    pre_num2 = num2;
                    while (start < end) {
                        start++;
                        num2 = nums[start];
                        if (num2 != pre_num2) {
                            break;
                        }
                    }
                }
                if (move_end) {
                    pre_num3 = num3;
                    while (start < end) {
                        end--;
                        num3 = nums[end];
                        if (num3 != pre_num3) {
                            break;
                        }
                    }
                }
            }
        }
        return solution + target;
    }
};
