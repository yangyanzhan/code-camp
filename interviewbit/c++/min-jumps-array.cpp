// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/min-jumps-array.html .

int Solution::jump(vector<int> &A) {
    int n = A.size(), begin = 0, end = 0, steps = 0;
    while (begin <= end) {
        if (end >= n - 1) {
            return steps;
        }
        int newBegin = end + 1, newEnd = end;
        for (int i = begin; i <= end; i++) {
            newEnd = max(newEnd, i + A[i]);
        }
        begin = newBegin;
        end = newEnd;
        steps++;
    }
    return -1;
}

