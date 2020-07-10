// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/reverse-bits.html .

unsigned int Solution::reverse(unsigned int A) {
    vector<int> bits(32, 0);
    int i = 0;
    while (A > 0) {
        bits[i++] = A % 2;
        A /= 2;
    }
    long long res = 0;
    for (int bit: bits) {
        res = res * 2 + bit;
    }
    return res;
}

