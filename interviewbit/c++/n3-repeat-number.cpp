// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/n3-repeat-number.html .

int Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size(), num1, count1 = 0, num2, count2 = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == num1) {
            count1++;
        } else if (A[i] == num2) {
            count2++;
        } else if (count1 == 0) {
            count1++;
            num1 = A[i];
        } else if (count2 == 0) {
            count2++;
            num2 = A[i];
        } else {
            count1--;
            count2--;
        }
    }
    count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] == num1) {
            count1++;
        } else if (A[i] == num2) {
            count2++;
        }
    }
    if (count1 > (n / 3)) {
        return num1;
    }
    if (count2 > (n / 3)) {
        return num2;
    }
    return -1;
}
