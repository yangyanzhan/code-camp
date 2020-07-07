// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/first-missing-positive.html .

int Solution::firstMissingPositive(vector<int> &A) {
    sort(A.begin(), A.end());
    int pre = -1, count = 0;
    for (int i = 0; i < A.size(); i++) {
        int now = A[i];
        if (now > 0) {
            if (now != pre) {
                count++;
                if (count != now) {
                    return count;
                }
            }
        }
    }
    return count + 1;
}

