// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/palindrome-integer.html .

int Solution::isPalindrome(int A) {
    stringstream ss;
    ss << A;
    string word = ss.str();
    for (int i = 0; i < word.length(); i++) {
        if (word[i] != word[word.length() - 1 - i]) {
            return 0;
        }
    }
    return 1;
}
