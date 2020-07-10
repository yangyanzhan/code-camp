// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/zigzag-string.html .

string Solution::convert(string A, int B) {
    if (B == 1)
        return A;
    vector<string> words(B);
    int n = A.length(), pos = 0, inc = 1;
    for (int i = 0; i < n; i++) {
        char ch = A[i];
        words[pos] += ch;
        pos += inc;
        if (pos == 0) {
            inc = 1;
        } else if (pos == B - 1) {
            inc = -1;
        }
    }
    string res;
    for (string word : words) {
        res += word;
    }
    return res;
}
