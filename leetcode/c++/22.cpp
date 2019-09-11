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
