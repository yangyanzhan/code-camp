// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/find-the-distance-value-between-two-arrays.html .

class Solution {
  public:
    int findTheDistanceValue(vector<int> &arr1, vector<int> &arr2, int d) {
        int res = 0;
        for (auto num1 : arr1) {
            bool valid = true;
            for (auto num2 : arr2) {
                if (abs(num1 - num2) <= d) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                res++;
            }
        }
        return res;
    }
};
