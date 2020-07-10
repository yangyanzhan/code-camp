// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/majority-element.html .

int Solution::majorityElement(const vector<int> &A) {
    int major = A[0], count = 1;
    for (int i = 1; i < A.size(); i++) {
        int num = A[i];
        if (count == 0) {
            major = num;
            count = 1;
        } else if (major == num) {
            count++;
        } else {
            count--;
        }
    }
    return major;
}
