// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/evaluate-expression.html .

int Solution::evalRPN(vector<string> &A) {
    string ops = "+-*/";
    stack<int> nums;
    for (string item : A) {
        if (ops.find(item) != string::npos) {
            string op = item;
            int b = nums.top();
            nums.pop();
            int a = nums.top();
            nums.pop();
            int c;
            if (op == "+") {
                c = a + b;
            } else if (op == "-") {
                c = a - b;
            } else if (op == "*") {
                c = a * b;
            } else {
                c = a / b;
            }
            nums.push(c);
        } else {
            nums.push(stoi(item));
        }
    }
    return nums.top();
}
