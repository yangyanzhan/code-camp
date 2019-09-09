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
