// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/reverse-in-parentheses.html .

std::string reverseInParentheses(std::string inputString) {
    using namespace std;
    vector<string> stack;
    for (auto ch: inputString) {
        if (ch != ')') {
            string item{ch};
            stack.push_back(item);
        } else {
            string whole = "";
            while (!stack.empty()) {
                string item = stack.back();
                stack.pop_back();
                if (item == "(") {
                    break;
                }
                whole = item + whole;
            }
            reverse(whole.begin(), whole.end());
            stack.push_back(whole);
        }
    }
    string res = "";
    for (auto item: stack) {
        res += item;
    }
    return res;
}
