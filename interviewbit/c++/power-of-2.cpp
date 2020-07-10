// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/power-of-2.html .

int divide(string &A) {
    int remain = 0;
    stringstream ss;
    for (int i = 0; i < A.length(); i++) {
        remain = remain * 10 + (A[i] - '0');
        int digit = 0;
        if (remain >= 2) {
            digit = remain / 2;
            remain = remain % 2;
        }
        if (digit == 0) {
            if (ss.str().length() > 0) {
                ss << digit;
            }
        } else {
            ss << digit;
        }
    }
    A = ss.str();
    return remain;
}

int Solution::power(string A) {
    if (A == "1")
        return 0;
    while (A != "0" && A != "1") {
        int remain = divide(A);
        if (remain != 0) {
            return 0;
        }
    }
    return A == "1";
}
