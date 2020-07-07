// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/wave-array.html .

vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(), A.end());
    for (int i = 0; i < A.size(); i += 2) {
        if (i + 1 < A.size()) {
            swap(A[i], A[i + 1]);
        }
    }
    return A;
}

