// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        for (char ch : s) {
            if (ch == '(') {
                stack.push_back(ch);
            } else if (ch == '[') {
                stack.push_back(ch);
            } else if (ch == '{') {
                stack.push_back(ch);
            } else if (ch == ')') {
                if (!stack.empty() && stack.back() == '(') {
                    stack.pop_back();
                } else {
                    return false;
                }
            } else if (ch == ']') {
                if (!stack.empty() && stack.back() == '[') {
                    stack.pop_back();
                } else {
                    return false;
                }
            } else if (ch == '}') {
                if (!stack.empty() && stack.back() == '{') {
                    stack.pop_back();
                } else {
                    return false;
                }
            }
        }
        return stack.empty();
    }
};
