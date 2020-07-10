// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/length-of-last-word.html .

int Solution::lengthOfLastWord(const string A) {
    int n = A.length(), res = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (A[i] == ' ') {
            if (res > 0) {
                break;
            }
        } else {
            res++;
        }
    }
    return res;
}

