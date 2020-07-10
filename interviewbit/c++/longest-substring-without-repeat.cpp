// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/longest-substring-without-repeat.html .

int Solution::lengthOfLongestSubstring(string A) {
    map<int, int> seen;
    int n = A.length(), begin = 0, best = 0;
    for (int i = 0; i < n; i++) {
        int num = A[i];
        if (seen.find(num) != seen.end()) {
            begin = max(begin, seen[num] + 1);
        }
        seen[num] = i;
        int len = i - begin + 1;
        best = max(best, len);
    }
    return best;
}
