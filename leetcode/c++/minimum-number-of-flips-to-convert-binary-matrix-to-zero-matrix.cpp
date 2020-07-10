// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/minimum-number-of-flips-to-convert-binary-matrix-to-zero-matrix.html .

class Solution {
  public:
    int minFlips(vector<vector<int>> &mat) {
        int m = mat.size(), n = mat[0].size();
        int v = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                v |= mat[i][j] << (i * n + j);
            }
        }
        if (v == 0) {
            return 0;
        }
        vector<int> vs{v};
        set<int> seen{v};
        int res = 0;
        while (vs.size() != 0) {
            res++;
            vector<int> new_vs;
            for (auto v : vs) {
                for (int i = 0; i < m; i++) {
                    for (int j = 0; j < n; j++) {
                        int v1 = v;
                        for (auto dir : vector<vector<int>>{
                                 {0, 0}, {-1, 0}, {1, 0}, {0, -1}, {0, 1}}) {
                            int i1 = i + dir[0], j1 = j + dir[1];
                            if (0 <= i1 && i1 < m && 0 <= j1 && j1 < n) {
                                v1 ^= 1 << (i1 * n + j1);
                            }
                        }
                        if (v1 == 0) {
                            return res;
                        } else {
                            if (seen.find(v1) == seen.end()) {
                                seen.insert(v1);
                                new_vs.push_back(v1);
                            }
                        }
                    }
                }
            }
            vs = new_vs;
        }
        return -1;
    }
};
