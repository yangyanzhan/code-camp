// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/lucky-numbers-in-a-matrix.html .

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> res;
        map<int, int> cache;
        int m = matrix.size(), n = matrix[0].size();
        for (int i = 0; i < m; i++) {
            int mini = *min_element(matrix[i].begin(), matrix[i].end());
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == mini) {
                    if (cache.find(j) == cache.end()) {
                        int maxi = numeric_limits<int>::min();
                        for (int i = 0; i < m; i++) {
                            maxi = max(maxi, matrix[i][j]);
                        }
                        cache[j] = maxi;
                    }
                    if (mini == cache[j]) {
                        res.push_back(mini);
                    }
                }
            }
        }
        return res;
    }
};

