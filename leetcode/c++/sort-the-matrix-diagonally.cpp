// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/sort-the-matrix-diagonally.html .

class Solution {
  public:
    vector<vector<int>> diagonalSort(vector<vector<int>> &mat) {
        int m = mat.size(), n = mat[0].size();
        for (int i = 0; i < m; i++) {
            int i1 = i, j1 = 0;
            vector<int> nums;
            while (i1 < m && j1 < n) {
                nums.push_back(mat[i1][j1]);
                i1++;
                j1++;
            }
            sort(nums.begin(), nums.end());
            i1 = i;
            j1 = 0;
            while (i1 < m && j1 < n) {
                mat[i1][j1] = nums[j1];
                i1++;
                j1++;
            }
        }
        for (int j = 1; j < n; j++) {
            int i1 = 0, j1 = j;
            vector<int> nums;
            while (i1 < m && j1 < n) {
                nums.push_back(mat[i1][j1]);
                i1++;
                j1++;
            }
            sort(nums.begin(), nums.end());
            i1 = 0;
            j1 = j;
            while (i1 < m && j1 < n) {
                mat[i1][j1] = nums[i1];
                i1++;
                j1++;
            }
        }
        return mat;
    }
};
