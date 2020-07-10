// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/ways-to-decode.html .

int ways(const string& A, int s) {
    if(s == A.size())
        return 1;
    else if(A[s] == '0')
        return 0;
    else if(A[s] > '2')
        return ways(A, s + 1);
    else if(s + 1 >= A.size())
        return ways(A, s + 1);
    else if(A[s] == '1' || (A[s] == '2' && A[s + 1] < '7'))
        return ways(A, s + 1) + ways(A, s + 2);
    else
        return ways(A, s + 1);
}


int Solution::numDecodings(string A) {
    return ways(A, 0);
}
