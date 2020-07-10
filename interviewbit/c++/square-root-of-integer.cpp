// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/square-root-of-integer.html .

int Solution::sqrt(int A) {
    double gap = 0.01, begin = 0, end = A;
    int res;
    while (true) {
        double middle = (begin + end) / 2;
        double middle2 = middle * middle;
        if (abs(middle2 - A) <= gap) {
            res = (int)floor(middle);
            break;
        }
        if (middle2 < A)
            begin = middle;
        else
            end = middle;
    }
    if ((res + 1) * (res + 1) == A)
        res++;
    return res;
}
