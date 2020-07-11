// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/redundant-braces.html .

int Solution::braces(string A) {
    stack<char> tokens;
    string ops = "+-*/";
    for (char ch : A) {
        if (ch != ')') {
            tokens.push(ch);
        } else {
            int cnt = 0;
            while (!tokens.empty() && tokens.top() != '(') {
                char token = tokens.top();
                if (ops.find(token) != string::npos) {
                    cnt++;
                }
                tokens.pop();
            }
            if (tokens.empty()) {
                return 0;
            }
            tokens.pop();
            if (cnt <= 0) {
                return 1;
            }
        }
    }
    return 0;
}
