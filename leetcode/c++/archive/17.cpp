// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

class Solution {
  public:
    vector<string> letterCombinations(string digits) {
        vector<string> solutions;
        if (digits.size() == 0) {
            return solutions;
        }
        map<char, vector<string>> mapping = {{'1', {""}},
                                             {'2', {"a", "b", "c"}},
                                             {'3', {"d", "e", "f"}},
                                             {'4', {"g", "h", "i"}},
                                             {'5', {"j", "k", "l"}},
                                             {'6', {"m", "n", "o"}},
                                             {'7', {"p", "q", "r", "s"}},
                                             {'8', {"t", "u", "v"}},
                                             {'9', {"w", "x", "y", "z"}},
                                             {'0', {" "}}};
        vector<string> sub_solutions = {""};
        if (digits.size() >= 2) {
            sub_solutions =
                letterCombinations(digits.substr(1, digits.size() - 1));
        }
        char ch = digits[0];
        if (ch == '1') {
            return sub_solutions;
        }
        for (string item : mapping[ch]) {
            for (string sub_solution : sub_solutions) {
                solutions.push_back(item + sub_solution);
            }
        }
        return solutions;
    }
};
