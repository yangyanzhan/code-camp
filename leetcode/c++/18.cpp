class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> solutions;
        set<vector<int>> cache;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 3; i++) {
            int num1 = nums[i];
            for (int j = i + 1; j < n - 2; j++) {
                int num2 = nums[j];
                int start = j + 1, end = n - 1;
                int sum12 = num1 + num2;
                while (start < end) {
                    int num3 = nums[start], num4 = nums[end];
                    int sum = sum12 + num3 + num4;
                    if (sum == target) {
                        cache.insert(vector<int>{num1, num2, num3, num4});
                        start++;
                        end--;
                    } else if (sum < target) {
                        start++;
                    } else {
                        end--;
                    }
                }
            }
        }
        for (const vector<int> &item : cache) {
            solutions.push_back(item);
        }
        return solutions;
    }
};
