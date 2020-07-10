// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

class Solution {
  public:
    map<int, vector<string>> mapping;
    vector<string> generateParenthesis(int n) {
        if (n == 0) {
            return vector<string>();
        }
        if (mapping.find(n) != mapping.end()) {
            return mapping[n];
        }
        vector<string> solutions;
        for (int i = 0; i < n; i++) {
            vector<string> parts1 = generateParenthesis(i);
            vector<string> parts2 = generateParenthesis(n - 1 - i);
            if (parts1.size() == 0) {
                parts1.push_back("");
            }
            if (parts2.size() == 0) {
                parts2.push_back("");
            }
            for (string part1 : parts1) {
                for (string part2 : parts2) {
                    string solution = "(" + part1 + ")" + part2;
                    solutions.push_back(solution);
                }
            }
        }
        mapping[n] = solutions;
        return solutions;
    }
};
