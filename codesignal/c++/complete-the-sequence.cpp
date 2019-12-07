// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/complete-the-sequence.html .

int CompletetheSequence(std::string sequence) {
    stringstream ss(sequence);
    int a, b, c, d;
    char ch;
    ss >> a >> ch >> b >> ch >> c >> ch >> d;
    if (a - b == b - c && b - c == c - d) {
        return 2 * d - c;
    } else if (b % a == 0 && c % b == 0 && d % c == 0) {
        if (b / a == c / b && c / b == d / c) {
            return d / c * d;
        }
    }
    return c + d;
}
