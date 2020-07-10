// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/reverse-the-string.html .

string Solution::solve(string A) {
    vector<string> words;
    int n = A.length();
    string pre = "";
    for (int i = 0; i < n; i++) {
        char ch = A[i];
        if (ch == ' ') {
            if (pre.length() > 0) {
                words.push_back(pre);
            }
            pre = "";
        } else {
            pre += ch;
        }
    }
    if (pre.length() > 0) {
        words.push_back(pre);
    }
    A = "";
    for (int i = words.size() - 1; i >= 0; i--) {
        A += words[i];
        if (i > 0) {
            A += " ";
        }
    }
    return A;
}
