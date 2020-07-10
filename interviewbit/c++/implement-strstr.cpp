// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/implement-strstr.html .

int Solution::strStr(const string haystack, const string needle) {
    int n = haystack.length(), m = needle.length();
    for (int i = 0; i < n; i++) {
        bool found = true;
        for (int j = 0; j < m; j++) {
            if (i + j >= n) {
                found = false;
                break;
            }
            if (haystack[i + j] != needle[j]) {
                found = false;
                break;
            }
        }
        if (found)
            return i;
    }
    return -1;
}
