// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/reverse-integer.html .

int Solution::reverse(int A) {
    int sign = A < 0 ? -1 : 1;
    stringstream ss;
    ss << abs(A);
    string word = ss.str();
    std::reverse(word.begin(), word.end());
    try {
        return sign * stoi(word);
    } catch (...) {
        return 0;
    }
}

